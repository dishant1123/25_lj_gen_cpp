/*
function  : 

1.no arg  no return 
2.no arg  with return 
3.with arg no return 
4.with arg with return
*/

// no arg no return  : 
/*
#include <iostream>
using namespace std;
void  add()
{
    int a,b,c; 
    cout<<"enter the  two number  : "; 
    cin>>a;
    cin>>b;
    c=a+b; 
    cout<<"the sum is : "<<c<<endl;
}
int main()
{
    add(); 
    return 0;
}
*/
// with arg  no return 
/*
#include <iostream>
using namespace std;
void  add(int a,int b=90);

int main()
{
    add(12); 
    add(12,30);
    return 0;
}
void  add(int a,int b)
{
    int c; 
    c=a+b; 
    cout<<"the sum is : "<<c<<endl;
}

*/ 

// no arg  with return : 
/*
#include <iostream>
using namespace std;
int  add()
{
    int a,b,c;
    cout<<"enter the  two number  : ";
    cin>>a;
    cin>>b;
    c=a+b; 
    return c; 
}
int main()
{
    cout<<add(); 
    return 0;
}
*/

// with arg  with return :
/*

#include <iostream>
using namespace std;
int  add(int a,int b )
{
    int c;
    c=a+b; 
    return c; 
}
int main()
{
    cout<<add(12,67); 
    return 0;
}
*/ 

/*
local variable  : declare in function  also  print  in function. outside function  you can't access the local variable. 

global variable : decalre  outside  function  access in function  alos  outside the function  and  also  modify in and  out side function . 

*/

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

// employee management system  ==> add update  delete search display  using function  with array 
// movie  ticket booking  system  ==> add movie ,ticket book ,search 
