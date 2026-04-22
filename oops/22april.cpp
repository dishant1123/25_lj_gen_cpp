/*
polymorphism  :  one name many forms. 

1. method overloading : complie time  
2. method overriding  : run time 

*/

// method overloading :   same  name  different  parameter  type
// ex :1 
/*
#include <iostream>
using namespace std;
class calculator 
{   
    public :
        int a=10,b=90; 
    
    int add()
    {
        return a+b;
    }
    int add(int c)
    {
        return a+b+c;
    }
    
};

int main()
{
    calculator c1;
    cout<<"add method is  : "<<c1.add()<<endl;
    cout<<"add method is  : "<<c1.add(10)<<endl;

    return 0 ; 
}
*/

// ex :2 constructor  

/*
#include <iostream>
using namespace std;
class student 
{
    public : 
        int age;
        string name;

    student()
    {
        cout<<"name is  : shrey  and  age  is  20"<<endl;
    }
    student(int a, string n)
    {
        age =a;
        name =n;
        cout<<"parameterized constructor is called"<<endl;
    }
    student(string n)
    {
        name =n; 
        age =20; 
        cout<<"non parameterized constructor is called"<<endl;
    }
    void  show()
    {
        cout<<"name is  : "<<name<<endl;
        cout<<"age is  : "<<age<<endl;
    }
};

int  main()
{
    student s1;   // default constructor

    student s2(23,"nirmit");
    s2.show();

    student s3("dr.henil");
    s3.show();

    return 0 ;

}
*/ 

/*
method  overriding  :  same function same parameter . 
*/

#include <iostream>
using namespace std;
class animal 
{
    public : 
        void  sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class dog: public animal
{
    public : 
        void  sound()
        {
            cout<<"dog sound"<<endl;
        }
}; 
class cat : public animal
{
    public : 
        void  sound()
        {
            cout<<"cat sound"<<endl;
        }
}; 
int  main()
{
    // dog d1; 
    // cat c1;

    // d1.sound();  // dog  sound 
    // c1.sound();  // cat  sound 

    animal *a; 

    cat c1; 
    a=&c1;
    a->sound();
    
    dog d1; 
    a=&d1; 
    a->sound();
    return 0 ;
}