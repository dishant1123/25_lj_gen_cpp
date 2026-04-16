/*
friend  function  : a friend function is a  function  that is not member of class but  still can access private and  protected member of class.

friend data_type function_name(class_name obj);

*/

// ex :1 
/*
#include <iostream>
using namespace std;
class student 
{
    private : 
        int marks ; 
    public : 
        student()
        {
            marks =90; 
        }
    friend void show(student s1); // friend function decalration
};
void show(student s1)
{
    cout<<"student marks is  : "<<s1.marks<<endl;
}
int  main()
{
    student s1; 
    show(s1);
    return 0; 
}
*/ 
// ex :2  ==> 
/*
#include <iostream>
using namespace std;
class Number 
{
    private : 
        int value; 
    public : 
        Number(int v)
        {
            value =v;
        }
    friend int add(Number n1, Number n2); 
};
int add(Number n1,  Number n2)
{
    return n1.value + n2.value; 
}
int main()
{
    Number n1(10),n2(20); 
    cout<<"sum is  : "<<add(n1,n2)<<endl;
    return 0;
}

*/ 

// inheritance  + encapsulation  + friend  function  : 
/*
login 
password ==> change  password  ==> set  method 
balance  ==> get balance 

deposit  withdraw check balance 
*/
#include <iostream>
using namespace std;
class account 
{
    private : 
        int accno; 
        string password;
        float balance; 
    public : 
        account(int accno , string  password, float balance)
        {
            this->accno =accno;
            this->password =password;
            this->balance =balance;
        }
        bool login(int acc, string passw)
        {
            return (accno ==acc && password ==passw);
        }
        void set_password(string new_password)
        {
            password =new_password;
            cout<<"password is  : "<<password<<endl;
        }
        float get_balance()
        {
            return balance;
        }
        void deposit(float amt)
        {
            balance +=amt;
            cout<<"deposit amount is  : "<<amt<<endl;
        }
        void withdraw(float amt)
        {
            if(balance -amt >=10000)
            {
                balance -=amt;
                cout<<"withdraw amount is  : "<<amt<<endl;
            }
            else 
            {
                cout<<"min balance maintain 10000 rs."<<endl;
            }
        }
        friend void show_details(account acc);
};
void show_details(account acc)
{
    cout<<"account number is  : "<<acc.accno<<endl;
    cout<<"balance is  : "<<acc.balance<<endl;
}

class bank : public account
{
    public : 
        bank(int accno , string  password, float balance):account(accno,password,balance)
        {
        }
};
int main()
{
    int acc; 
    string  passw; 

    bank b1(4352,"nirmit1610",25000);  // password : nirmit1610

    cout<<"BANK DETAILS"<<endl;
    cout<<"enter the account number : ";
    cin>>acc;
    cout<<"enter the password : ";
    cin>>passw;

    if(b1.login(acc,passw))
    {
        int choice; 
        float  amt; 
        string new_passowrd; 
        do{

        }
    }
    else 
    {
        cout<<"wrong password"<<endl;
    }
    return 0; 
}
/*
1.password : 1 lower 1 upper 1 digit 1 special character  ==> length  min  8
*/