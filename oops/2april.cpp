/*
inheritance : to  inherit properites and  methods from  parents class .

1. single level inheritance  
2. multiple level inheritance
3. multiple inheritance
4. hiechical inheritance
5. hybrid inheritance  ==> virtual inheritance ==> diamond problem

*/

// ex :1 single level inheritance
/*
#include<iostream>
using namespace std;
class student   // base class 
{
    public : 
        int rollno =1; 
        string name ="nirmit";

};
class teacher : public student  // derived class
{
    public : 
        void  show()
        {
            cout<<"student rollno is  : "<<rollno<<endl;
            cout<<"student name is : "<<name<<endl;
        }
};
int main()
{
    teacher t1; 
    t1.show(); 
    return 0;
}
*/ 

// ex :2 using constructor  : 
/*
#include<iostream>
using namespace std;
class student 
{
    public : 
        int rollno; 
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
        string subject; 
    // teacher(string s,int r, string n):student(r,n) // base class constructor called
    // {
    //     subject =s;
    // }
    teacher(string s)
    {
        subject =s;
    } 
    void show()
    {
        cout<<"student rollno is  : "<<rollno<<endl;
        cout<<"student name is : "<<name<<endl;
        cout<<"teacher subject is : "<<subject<<endl;
    }
};
int main()
{
    // teacher t1("python",1,"nirmit");
    teacher t1("python");
    t1.show(); 
    return 0; 
}
*/

// ex :3 multiple level inheritance  vs  multi level 

/*
class a :                                class a 
class b :                                class b : public a  ==> b ==>a 
class c : public a, public b             class c : public b   == >c ==>a,b 
*/

// multiple level inheritance  : 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int age; 
    public : 
        string  name; 
    student(int a, string n)
    {
        age =a; 
        name =n;
    }
    void display_age()
    {
        cout<<"age is  : "<<age<<endl;
    }
};
class professor 
{
    public : 
        string dept;
    professor(string d)
    {
        dept =d;
    }
};
class clg : public student ,public professor
{
    public : 
        string clg_name; 
    clg(string c_n,int a, string n,string d):student(a,n),professor(d)
    {
        clg_name =c_n;
    }
    void show()
    {
        cout<<"clg name is  : "<<clg_name<<endl;
        cout<<"name is  : "<<name<<endl;
        display_age();  // student ::display_age();
        cout<<"dept is  : "<<dept<<endl;
        
    }
};
int main()
{
    clg c1("New_lJ",20,"nirmit","Research");
    c1.show();
    return 0; 
}
*/ 
// ex :4 multi level inheritance    emp  , manager , ceo 

// ex :5 hireachical inheritance
/*

class a 
class b : public a   
class c : public a
class d : public a
*/
/*
#include <iostream>
using namespace std;
class vehicle 
{
    public : 
        string name ;
    vehicle(string n)
    {
        name =n; 
    }
};
class car : public vehicle
{
    private : 
        string model ; 
    public : 
        int year; 

    car (string model, int year,string n) :vehicle(n)
    {
        this->model =model;
        this->year =year;
    }
    void show()
    {
        cout<<"name : "<<name<<endl;
        cout<<"car model : "<<model<<endl;
        cout<<"car year : "<<year<<endl;
    }
};
class bike : public vehicle
{
    private : 
        string model; 
    public : 
        int year;
    bike(string model, int year,string n) :vehicle(n)
    {
        this->model =model;
        this->year =year;
    }
    void show()
    {
        cout<<"name : "<<name<<endl;
        cout<<"bike model : "<<model<<endl;
        cout<<"bike year : "<<year<<endl;
    }
};
int main()
{
    car c1("audi-Q3",2012,"4 wheeler");
    c1.show();

    bike b1("Royal_enfield",2012,"2 wheeler");
    b1.show();

    return 0;
}

*/ 

// ex :6 hybrid inheritance
/*
its  combination  of  multiple  inheritance  and  multilevel inheritance. 

class a :                                class a 
class b :                                class b : public a  ==> b ==>a 
class c : public a, public b             class c : public b   == >c ==>a,b 

class a 
class b : public a 
class c : public a 
class d : public b , public c

           person 
           /    \
          emp   marks 
           \    / 
            result   


*/
// hybrid inheritance  : without using virtual inheritance 

#include <iostream>
using namespace std;
class person 
{
    protected : 
        string name ; 
    private : 
        int age; 
    public : 
        person(string n="", int a=0)
        {
            name =n;
            age =a;
            cout<<"person constructor called"<<endl;
        }
        void  person_show()
        {
            cout<<"person name is  : "<<name<<endl;
            cout<<"person age is  : "<<age<<endl;
        }
};
class student : public person 
{
    protected : 
        int rollno ; 
    public : 
        student(string n="", int a=0, int r=0):person(n,a)
        {
            rollno =r; 
            cout<<"student constructor called"<<endl;
        }
};
class teacher : public person
{
    protected :
        string subject ;
    public : 
        teacher(string n="", int a=0, string s=""):person(n,a)
        {
            subject =s;
            cout<<"teacher constructor called"<<endl;
        }
};
class result : public student , public teacher
{
    private : 
        int marks; 
    public : 
        result(string n, int a, int r , string s,int m): student(n,a,r),teacher(n,a,s)
        {
            marks =m;
            cout<<"result constructor called"<<endl;
        }
        void  result_show()
        {
            cout<<"===============result==============="<<endl;
            student::person_show(); 
            cout<<"student rollno is  : "<<rollno<<endl;
            cout<<"subject is  : "<<subject<<endl;
            cout<<"marks is  : "<<marks<<endl;

        }
};
int main()
{
    result r1("nirmit",23,1,"python",90);
    r1.result_show();
    return 0 ;
}