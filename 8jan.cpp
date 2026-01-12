/*
type  loop  : 
1. for  loop : entry    
2. while  : entry 
3. do while  :  exit 

for( int ; con ; inc/dec )
{
    cout<<
}

while(con)
{
    cout<<
    inc/dec 
}
*/
// prime  perfect twin amg  reverse pelindrome strong   

// perfect : 
/*
6 factors  : 1,2,3,6 
sum = 1+2+3 =6 

28 factors  1 2 4 7 14 28 
sum = 1+2+4+7+14 = 28 

100 factors : 1 2 4 5 10 20 25 50 
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int num, sum =0,i;
    cout<<"enter the  number  : ";
    cin>>num; // 6 
    for(i=1; i<num; i++) // 6 6 <6 
    {
        if(num %i ==0) // 6 %5 ==0 
        {
            sum =sum +i;  // sum = 6 
        }
    }  
    if(num ==sum)
    {
        cout<<"perfect number  : "<<num<<endl;
    }
    return 0; 
}
*/ 

// strong number  : 
/*
145 :
each factorial  : 1  24  120 
sum = 1+120 +24 =145  
*/
#include<iostream>
using  namespace std;
int main()
{
    int num, sum=0,fact,i,temp;
    cout<<"enter the  number  : ";
    cin>>num;  // 145 

    temp = num;  // temp =145 
    
    while(temp > 0) //0  > 0 
    {
        int  r = temp %10;  // r =1 %10 =1 
        fact =1 ; 
        for(i=1; i<=r; i++)
        {
            fact =fact *i;  // fact =1
        }
        sum =sum +fact ; // sum =145
        temp = temp /10 ;  // temp =1 /10 =0 
    }
    if(sum == num)
    {
        cout<<"strong number  : "<<num<<endl;
    }
    return 0; 

}
/*
amg  : 

153 : 3 digit 
each cube  : 1 125 27    sum = 1+125+27 =153

1634 : 4 digit 
each power : 1 pow 4   = 1  6 power 4  =1296  3 pow 4 =81  4 pow 4 =256  
sum = 1+1296+81+256 =1634

logic :  count = 0 
    temp = temp /10 
    count ++       ===> count =4 

logic 2 : 
r = temp %10    1 %10 =1 
sum =sum + pow(r,count)   // sum = 1634 
temp = temp /10  // temp =0 


*/

/*
twin number  : 

123 : 
each digit sum = 1+2+3 =6 
each  mul = 1*2*3 =6 

steps :   sum =0 mul =1 
1. while  (temp > 0 )   num 1 
2.  r=  temp %10     // r =1 
3.  sum =sum +r     // sum =6 
4.  mul = mul *r    // mul = 6 
5.  temp = temp /10 // temp =0

6. sum ==mul  ==> 123 is twin number
*/

// harshard  number  : 

/*
ex : 18 
each digit sum = 1+8 = 9 
now  if (num % sum) == 0  then is  harshard  number 
        18 % 9 ==0  ==> 18 is  harshard  number
*/


// Disarium Number : 
/*
A Disarium number is a number in which the sum of its digits raised to the power of their respective positions (starting from 1) is equal to the number itself. 

ex : 175 :
    1 pow 1 =1 
    7 pow 2 =49
    5 pow 3 =125
    sum = 1 +49+125 =175 then it is disarium number . 

hint  : 

first digit : 175 /100 =1 
second  digit : (175 /10)  %10 = 7  
last digit : 175 %10 =5 
sum = pow(firstdigit,1) + pow(seconddigit,2)  + pow(lastdigit,3)
*/