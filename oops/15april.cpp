/*
encapsulation  : privacy ,wrapping data hide internal data  , data protect 

1. get  method : private print   
2. set method  : private  modify 

*/

// ex :1   
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int age; 
    public : 
        string name;
    student(int a, string n)
    {
        age =a; 
        name =n;
    }
    void show_age()
    {
        cout<<"age is  : "<<age<<endl;
    }
};
class teacher : public student
{
    public : 
        teacher(int a, string n) :student(a,n)
        {
        }
        void  show()
        {
            cout<<"student  name is  : "<<name<<endl;
            show_age();
        }
};
int  main()
{
    teacher t1(23,"nirmit");
    t1.show();
    return 0; 
}
*/ 

// ex :2 with get and  set method : 

#include <iostream>
using namespace std;
class student 
{
    private : 
        int age; 
        string  name; 
    public : 
        student(int a, string n)
        {
            age =a; 
            name =n;
        }
        string get_name()
        {
            return name; 
        }
        int get_age()
        {
            return age; 
        }
        void set_age(int new_age)
        {
            age =new_age; 
        }
        void set_name(string new_name)
        {
            name =new_name;
        }
};
int main()
{
    student s1(23,"nirmit");
    cout<<"without using set method  : "<<endl;
    cout<<"name is  : "<<s1.get_name()<<endl;
    cout<<"age is  : "<<s1.get_age()<<endl;


    cout<<"with using set method  : "<<endl;
    s1.set_age(20);
    s1.set_name("jaimin"); 

    cout<<"name is  : "<<s1.get_name()<<endl;
    cout<<"age is  : "<<s1.get_age()<<endl;


    return 0;
}

// friend void show(student s1);