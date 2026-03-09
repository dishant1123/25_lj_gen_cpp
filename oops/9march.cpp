/*
constructor  : 

4. copy constructor  
5. constructor overloading 

ex: 
    int  a[] ={1,2,3,4,5}; 
    int  b=a[]; 

*/
// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
        public : 
           int rollno;
           string name; 
        student(int r, string n)
        {
            rollno =r; 
            name =n; 
        }
        student(const student &s)
        {
            rollno =s.rollno;
            name =s.name;
            cout<<"copy constructor called"<<endl;
        }
        void  show()
        {
            cout<<"rollno is  : "<<rollno<<endl;
            cout<<"name is : "<<name<<endl;
        }
};
int  main()
{   
    student s1(1,"ram");
    student s2(s1);
    
    s2.show(); 
    // s1.show(); 
    return 0;
}

*/ 

// ex :2  constructor overloading
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno; 
        string  name; 

    student()
    {
        cout<<"default constructor called"<<endl;
    }
    student(string n)
    {
        rollno =1; 
        name =n;
        cout<<"non parameterized constructor called"<<endl;
    }
    student(int r,string n)
    {
        rollno =r;
        name =n;
        cout<<"parameterized constructor called"<<endl;
    }
    void  show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is : "<<name<<endl;
    }
};
int main()
{
    student s; 
    student s1("ram"); 
    s1.show(); 

    student s2(12,"sita"); 
    s2.show(); 
    return 0; 
}

*/ 

/*
inheritance  : to  inherit properites and  methods from  parents class .  

1. single 
2. multiple
3. multi level
4. hiechical
5. hybrid  ==> virtual inheritance ==> diamond problem
*/

// ex :1 single   
/*
class a  
class b : public a 
*/
/*
#include <iostream>
using namespace std;
class student   /// base  class 
{
    protected : 
        int  rollno=1; 
        string name="nirmit";
    
};
class teacher : protected student   // derived class
{
    public : 
        string subject="python"; 
    void show()
    {
        cout<<"student rollno is  : "<<rollno<<endl;
        cout<<"student name is : "<<name<<endl;
        cout<<"teacher subject is : "<<subject<<endl;
    }
};
int main()
{
    teacher t1; 
    t1.show(); 
    return 0; 
}
*/ 

// ex :2  using  constructor  : 

#include <iostream>
using namespace std;
class student 
{
    public : 
        int  rollno ; 
        string name;
    // student(int r, string n)
    // {
    //     rollno =r;
    //     name =n;
    // }
    student()
    {
        rollno =1; 
        name ="nirmit";
    }
};
class teacher : public student 
{
    public : 
        string  subject; 
    teacher(string s) :student()
    {
        subject =s;
    }
    void  show()
    {
        cout<<"student rollno is  : "<<rollno<<endl;
        cout<<"student name is : "<<name<<endl;
        cout<<"teacher subject is : "<<subject<<endl;
    }
};
int main()
{
    teacher t1("python");
    t1.show(); 
    return 0; 
}