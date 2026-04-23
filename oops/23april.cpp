/*
virtual function  :  function  which  can  be  overriden  by  derived  class

1. virtual function declaration  with  virtual  keyword. 
*/

#include <iostream>
using namespace std;
class animal
{
    public : 
        virtual void  sound()
        {
            cout<<"animal sound"<<endl;
        }
};
class dog : public animal
{
    public : 
        void  sound() override
        {
            cout<<"dog sound"<<endl;
        }
};
class cat : public animal
{
    public : 
        void  sound() override
        {
            cout<<"cat sound"<<endl;
        }
};

int main()
{
    animal *a = new dog; 
    animal *b= new cat;
    // animal *a; 
    // dog d; 
    // a=&d; 
    a->sound();
    b->sound();

    return 0; 
}

/*
        method overloading                  method overriding 
1.      name same  para. diff               name  and para. same 
2.        complie  time                     run time
3.      inheritance is  not requ.            inheritance is requ.
4.     not virtual function                  virtual function     
*/