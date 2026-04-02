/*
constructor  : automatically called when object is created.
1. no return type.
2. class name =constructor name

type : 
1. default constructor
2. parameterized constructor
3. non parameterized constructor
4. copy constructor
5. constructor overloading

*/

// ex :1 default constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        student()
        {
            cout<<"default constructor called"<<endl;
        }
};
int main()
{
    student s1; 
    return 0 ;
}
*/ 

// ex :2 non  parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int age; 
        student()
        {
            name ="shrey"; 
            age =19;
            cout<<"non parameterized constructor called"<<endl;
        }
        void  show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
int main()
{
    student s1; 
    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;
    s1.show();
    return 0 ;
}
*/ 
// ex :3 parameterized constructor
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int age; 
        // student(string n , int a)  
        // {
        //     name =n; 
        //     age =a;
        //     cout<<"parameterized constructor called"<<endl;
        // }
        student(string name, int age)
        {
            this->name =name ; 
            this->age =age; 
        }
        void  show()
        {
            cout<<"name is : "<<name<<endl;
            cout<<"age is : "<<age<<endl;
        }
};
int main()
{
    student s1("shrey",19);
    cout<<"name is  : "<<s1.name<<endl;
    cout<<"age is  : "<<s1.age<<endl;
    s1.show();
    return 0 ;
}
*/ 

// ex :4 copy constructor

/*
int  a=10
int b=a; 

cout<< b;

student s1("shrey",19);
student s2(s1); 
*/
/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        string name;
        int age; 
    student(string n, int a)
    {
        name =n; 
        age =a;
    }
    student(const student &s)
    {
        name=s.name; 
        age=s.age; 
    }
};
int  main()
{
    student s1("shrey",19);
    student s2(s1);

    cout<<"name is  : "<<s2.name<<endl;
    cout<<"age is  : "<<s2.age<<endl;

    return 0 ;
}
*/

// ex :5 constructor overloading

#include <iostream>
using namespace std;
class student 
{
    public : 
        string name; 
        int  age; 

    student()
    {
        cout<<"student default constructor called"<<endl;
    }
    student(string n)
    {
        name =n;
        age =20; 
        cout<<"student non parameterized constructor called"<<endl;
    }
    student(int a,string n)
    {
        age =a; 
        name =n;
        cout<<"student parameterized constructor called"<<endl;
    }
    void show()
    {
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
    }
};
int main()
{
    student s1;
    student s2("shrey");
    s2.show(); 

    student s3(20,"shrey");
    s3.show();
    return 0 ;
}

