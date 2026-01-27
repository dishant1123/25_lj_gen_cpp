/*
ROYAL KID BANK : 

1. create  username and password . 
2. login   ==> it is  compuslory  . if login success then 25000 rs cr in user account.
               if log in fail then direct  exit. 
    if login successfull then display below function  like  : 
        1. deposit 
        2. withdraw
        3. balance
        4. exit

condition  : for withdraw : ==> you have maintain 10000 rs in your account . 
            means : if  your balance  is 35000 and  your withdraw amt is  30000 then  you can't withdraw  30000 rs. because  you have  only  10000 rs in your account.

        balance  25000 
        deposit  : 10000   total balance  : 35000 
        withdraw : 30000   

task   :1  user have max 3 attempt for  login. 
task   :2  if user  choose withdraw  then ask user to enter  pin and also verify the pin. 

*/
/*
#include <iostream>
#include <string>
using namespace std; 

string saveduser,savedpass; // global variable 
int balance =25000;  // global variable

bool login()
{
    string user, pass; 
    cout<<"enter username : ";
    cin>>user; 
    cout<<"enter password : ";
    cin>>pass; 
    if(user ==saveduser && pass ==savedpass)
    {
            return true;
    }
    else 
    {
        return false;
    }
}
void deposit()
{
    int amt; 
    cout<<"enter deposit amount : ";
    cin>>amt; 
    balance+=amt;
    cout<<"your depsit amount : "<<amt<<endl;

}
void  withdraw()   // after  deposit  ==> 35000 
{
        int  amt; 
        cout<<"enter withdraw amount : ";
        cin>>amt;  // 3000 

        if(balance -amt >=10000) // 35000 -3000 > =10000 
        {
            balance-=amt;
            cout<<"your withdraw amount : "<<amt<<endl;
        }
        else 
        {
            cout<<"min balance  required 10000 rs"<<endl;
        }
}
void checkbalance()
{
    cout<<"your balance : "<<balance<<endl;
}
int main()
{
    int choice; 
    cout<<"ROYAL KID BANK"<<endl;

    cout<<"enter the  username : "; 
    cin>>saveduser; 
    cout<<"enter the password : ";
    cin>>savedpass;

    cout<<"Login is  required  to access the function"<<endl;

    if(!login())
    {
        cout<<"login failed"<<endl;
        return 0; 
    }
    cout<<"login success"<<endl;
    cout<<"Your intial balance  is  : "<<balance<<endl;

    do{
        cout<<"=============== MENU =============="<<endl;
        cout<<"1. deposit"<<endl;
        cout<<"2. withdraw"<<endl;
        cout<<"3. balance"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice; 
        switch(choice)
        {
            case 1: 
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkbalance();
                break;
            case 4 :
                cout<<"bye"<<endl;
                return 0;
            default:
                cout<<"invalid choice"<<endl;
        }
    }while(choice !=4);
    return 0; 
}
*/

// movie ticket booking system  ==> add movie ,ticket book ,search

/*
1. add movie  : id,name,available_seats,timings 
2. ticket booking  : 
            1. id , movie , seat , timing 
            2. tickets : 
                  gold :200 , sliver:400 , platinum:800 
            3.  Total booking ticket :  
                    id   : 101 
                    movie : KGF
                    timings : 10pm  
                    total ticket : 3200 
3. search movie : 
            1. id :   101 
4. display 

example  : 

id    name    available_seats    timings
101   KGF       100               10pm ,10am 
102   RRR       50                9pm, 9am  
*/