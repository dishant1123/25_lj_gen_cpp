/*
1. single  level inheritance
2. multiple level inheritance
3. multilevel inheritance
4. hiechical inheritance
5. hybrid inheritance   ==> diamond prlm 
*/

// ex :1 single level inheritance
/*
#include<iostream>
using namespace std;
class student    // base class 
{
    public : 
        void  show()
        {
            cout<<"student  class  method. "; 
        }
};
class teacher : public student  // derived class
{
    public : 
        void display()
        {
            cout<<"teacher  class  method. ";
        }
};
int  main()
{
    teacher t1;  // teacher <== class    t1 ==> object 
    t1.show();
    t1.display();
    return 0;
}
*/ 

// ex :2 constructor : 
/*
#include<iostream>
using namespace std;
class student    // base class 
{
    public :
        string  name ; 
        int  rollno; 
        // student(int r , string n)
        // {
        //     rollno =r;
        //     name =n;
        // } 
        student()
        {
            name ="ram";
            rollno =1;
        }
};
class teacher : public student  // derived class
{
    public :
        string subject; 
    // teacher(string s,int  r , string n) :student(r,n) // base class constructor called
    // {
    //     subject =s;
    // }
    teacher(string s)
    {
        subject =s;
    }
    void  show()
    {
            cout<<"name  :"<<name<<endl;
            cout<<"rollno  :"<<rollno<<endl;
            cout<<"teacher subject  :"<<subject<<endl;
    } 
    //   
};
int  main()
{
    // teacher t1("python",1,"ram");  // teacher <== class    t1 ==> object 
    teacher t1("python"); 
    t1.show();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class student 
{
    private : 
        int  rollno;
    protected :
        string  name ; 
    public : 
        int age; 
        
    student(int r, string n, int a)
    {
        rollno =r;
        name =n;
        age =a;
    }
    void rollno_show()
    {
        cout<<"rollno  :"<<rollno<<endl;
    }
       
};
class teacher : public student  // derived class
{
    public : 
        teacher(int r, string n, int a):student(r,n,a)
        {
        }
        void  show()
        {
            cout<<"name  :"<<name<<endl;
            rollno_show(); 
            cout<<"age : "<<age<<endl;
        }
};

int  main()
{
    teacher t1(1,"ram",23);  // teacher <== class    t1 ==> object
    t1.show();
    return 0; 
}
*/

// ex :3 multiple  inheritance : 

/*
class a  
class b 
class c : public a , public b 
*/
#include<iostream>
using namespace std;
class student 
{
    private : 
        int age; 
    public : 
        string  name ;
    student(int a, string n)
    {
        age =a;
        name =n;
    }
    void age_show()
    {
        cout<<"age  :"<<age<<endl;
    }
};
class teacher 
{
    protected : 
        string subject ;
    public : 
        string t_name; 
    teacher(string s,string t_n)
    {
        subject =s;
        t_name =t_n;
    }

};
class clg : public student , public teacher
{
    public :
        string  clg_name; 
    clg(int a, string n,string s,string t_n,string c_n):student(a,n),teacher(s,t_n)
    {
        clg_name =c_n;
    }
    void  show()
    {
        cout<<"Clg name  :"<<clg_name<<endl;
        cout<<"name  :"<<name<<endl;
        age_show();
        cout<<"teacher name : "<<t_name<<endl;
        cout<<"subject  :"<<subject<<endl;


    }
};

int  main()
{
    clg c1(23,"ram","python","prof.vyas","LJ"); 
    c1.show();
    return 0; 
}

// multi level inheritance :

/*
class a  
class b : public a   ==> b ==> a
class c : public b  ==> c ==> a,b

class employees 
class manager : public employees
class ceo : public manager 
*/