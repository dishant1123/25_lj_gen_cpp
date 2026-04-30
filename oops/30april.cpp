/*
abstraction : hiding implementation detalis  and showing only the essential features 
to the user. 

ex :real life example  : 
         car  ===> drive   ===> streeing   ===> esc , cluch , break 

note  : 
1. no  obj created . 
pure virtual  function:    virtual void  drive () =0 ; 

virtual  : 
class car 
    public : 
       virtual  void  drive() =0
       {
           cout<<"driving"<<endl;
       }

*/

// ex :1 
/*
#include<iostream>
using namespace std;
class shape 
{
    public : 
        virtual void area() =0;
        // void  area()= 0;  
};
class circle : public shape 
{
    public :
        int radius; 
    circle(int r)
    {
        radius = r;
    } 
    void area()
    {
        cout<<"area of circle is : "<<3.14*radius*radius<<endl;
    }    
};
class rectangle : public shape
{
    public : 
        int length, breadth;
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout<<"area of rectangle is : "<<length*breadth<<endl;
    }
};
int  main()
{
    shape *s; 

    circle c(5); 
    rectangle r(5, 10);

    s = &c; 
    s->area();

    s=&r; 
    s->area(); 

    return 0 ;
}
*/

// ex :2 

#include<iostream>
using namespace std;
class bank 
{
    protected : 
        string name; 
        int accno; 
        int  balance; 
    public : 
        bank(string n, int a, int b)
        {
            name =n; 
            accno = a;
            balance = b;
        }
    virtual void calculation_int() =0; 

    void  display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"accno : "<<accno<<endl;
        cout<<"balance : "<<balance<<endl;
    }
};

class saving : public bank
{
    public :
        saving(string n, int a, int b) : bank(n, a, b)
        {
        }
    void calculation_int()
    {
        int intrest = balance  * 0.05;  //(5% int )
        balance = balance + intrest;
        cout<<"saving  int : "<<intrest<<endl;
    }
};

class fixdeposit : public bank 
{
    public :
        fixdeposit(string n, int a, int b) : bank(n, a, b)
        {
        }
    void calculation_int()
    {
        int intrest = balance  * 0.09;  //(5% int )
        balance = balance + intrest;
        cout<<"saving  int : "<<intrest<<endl;
    }
};

int  main()
{
    int choice; 
    string name;
    int accno;
    int balance;
    bank *b; 


    do{
            cout<<"BANK MENU"<<endl;
            cout<<"1. saving"<<endl;
            cout<<"2. fix deposit"<<endl;
            cout<<"3. exit"<<endl;
            cout<<"enter your choice : ";
            cin>>choice;
            if(choice >=1 && choice <=2)
            {
                cout<<"enter name : ";
                cin>>name;
                cout<<"enter accno : ";
                cin>>accno;
                cout<<"enter balance : ";
                cin>>balance;
            }
            switch(choice)
            {
                case 1 :
                {
                    saving s(name, accno, balance);
                    b= &s; 
                    b->display(); 
                    b->calculation_int();
                    break;
                }    
                case 2 : 
                {
                    fixdeposit f(name, accno, balance);
                    b= &f;
                    b->display();
                    b->calculation_int();
                    break;
                }
                case 3 :
                {

                    cout<<"bye"<<endl;
                    break;
                }
                default :
                { 
                    cout<<"wrong choice"<<endl;
                    break;
                }
            }

    }
    while(choice !=3);
    return 0; 
}