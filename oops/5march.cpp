/*
class : blueprint  of  object .  
object : instance  of  class. 

ex : 1 

fruits : 
    apple banana orange chiku mango 

========================================================================

access specifier : 
1. public  : accessible from anywhere
2. private : within class only  
3. protected : within class and sub-class  (inheritance)

========================================================================

4 pillar : 

1. inheritance : 
    a.single b.multiple c.multi level d.hiechical e.hybrid  ==> virtual  inheritance 
2. encapsulation :
    a.get method b.set method 
3. polymorphism :
    a.method overloading ==> compile time polymorphism
    b.method overriding  ==> run time polymorphism
4. abstraction : 
    a.abtract method 
    b.abstract class
*/

// ex :1 public 
/*
#include <iostream>
using namespace std;
class student 
{
    public :
        int rollno;
        string name;
        //int  rollno=1;  // rollno name  ==> data member 
        //string name="nirmit"; 

    void input()
    {
        cout<<"enter rollno : ";
        cin>>rollno;
        cout<<"enter name : ";
        cin>>name;
    }
    void show()
    {
        cout<<"rollno is  : "<<rollno<<endl;
        cout<<"name is : "<<name<<endl;
    }
};
int main()
{
    student s1;  // s1 is object of class student
    // cout<<"rollno is  : "<<s1.rollno<<endl;
    // cout<<"name is : "<<s1.name<<endl;
    s1.input();  // 1  bhavya 
    s1.show();
    s1.name ="henil";
    s1.rollno=23;
    s1.show();
    return 0; 
}
*/

// ex : 2 private
/*
#include <iostream>
using namespace std;
class student 
{
    private :
        string name="ram"; 
        int age=56;

    void show()
    {
        cout<<"age is : "<<age<<endl;
        cout<<"name is : "<<name<<endl;
    }
    public : 
        void display()
        {
            name ="sita"; 
            age=23;
            show(); 
        }
};
int main()
{
    student s1; 
    // cout<<"age is : "<<s1.age<<endl; not accessible  bcz of  private . 
    // cout<<"name is : "<<s1.name<<endl;
    // s1.show();
    // s1.display();
    // s1.name ="henil";  // not update bcz  of  private. 
    // s1.age=23;
    s1.display();
    return 0; 
}
*/
// b 2   b 2    h 2   j 2     a 2     s unique1    n 2    sh 2    dev 2 


// ex :3 protected
/*
#include <iostream>
using namespace std;
class student  // base 
{
    protected :
        string name="ram";
        int age =56; 
};
class teacher :  public student     // derived
{
    public : 
        void show()
        {
            name ="sita";
            age =34; 
            cout<<"age is : "<<age<<endl;
            cout<<"name is : "<<name<<endl;
        }
} ;
int main()
{
    student s1; 
    // cout<<"age is : "<<s1.age<<endl; // not accessible bcz of protected
    // cout<<"name is : "<<s1.name<<endl;
    teacher t1; 
    t1.show(); 
    return 0; 

}
*/

//bank  : 
#include <iostream>
using namespace std;
class bank 
{
    public : 
        string ac_holder_name ="nirmit"; 
        string bank_name ="HDFC"; 
        double ac_number =721200089456; 
        string branch= "Mehsana"; 
        int balance = 30000; 
    
    void deposit(int amt)
    {
        balance+=amt;
        cout<<"deposit amt is  : "<<amt<<endl;
    }
    void withdraw(int amt) // 40000 -3600 >=10000  
    {
        if(balance -amt >=10000)
        {
            balance-=amt;
            cout<<"withdraw amt is  : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance is  required 10000 rs. "<<endl;
        }
    }
    void check_balance()
    {
        cout<<"balance is : "<<balance<<endl;
    }
    void  info()
    {
        cout<<"bank name is : "<<bank_name<<endl;
        cout<<"branch is : "<<branch<<endl;
        cout<<"ac holder name is : "<<ac_holder_name<<endl;
        cout<<"ac number is : "<<ac_number<<endl;
        cout<<"intial balance is : "<<balance<<endl;
    }
};
int main()
{
    bank b1; 
    b1.info(); 
    b1.deposit(10000); 
    b1.withdraw(18000);
    b1.check_balance(); 
    return 0; 
}
/*
task  :1 generate  pin  
deposit  and  withdraw ==> verify pin  
*/