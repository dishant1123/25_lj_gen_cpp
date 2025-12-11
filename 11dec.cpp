// with using  namespace std; 
/*
#include<iostream>
using  namespace std; 
int main()
{
	cout<<"my name is ketan.\n";
	cout<<"my name is ram."<<endl;
	cout<<"my name is sita.";

 	return 0;
}
*/ 
// with out  using  namespace std;
/*
#include<iostream>
int main()
{
	std::cout<<"my name is ketan.\n";
	std::cout<<"my name is ram.\n";
	std::cout<<"my name is sita.";

 	return 0;
} 

*/ 

/*
variable  declaration rules : 

1. start number  , special character , 
2. except : __   ==> int __ =190 ==> right 

data type  : 

1. int  
2. float 
3. long int 
4. double 
5. char / string  
6. bool 

*/

/*
#include<iostream>
using  namespace std;
int main()
{
    int  a=100; 
    float b =12.45;
    string name; 
    cout<<"value of a is  : "<<a<<endl;
    cout<<"value of b is  : "<<b<<endl;
    cin>>name; 
    cout<<"value of name is  : "<<name<<endl;
    return 0; 
}
*/ 

/*
operator  : 

1.airthematic : + - / * % 
2.relational : < > <= >=  == != 
    ex : float a =12.00 ;
        float b =12 ; 
        cout<<a==b;
3.logical : && , || 
    ex : a=10 b=20  ==> a>b || a!=b
4.assignment : += -= *= /= %=   
    ex : a=a +b   ==>a+=b 
5. increment  & decrement : 
    pre : ++a  pre dec : --a 
    post : a++  post dec :a-- 

    ex : int a =10 
    a++  + ++a - a-- + --a + a++  ==> cout <<a  ==> ??

    10 + 12-12 +10 +10 
    30 33 
6. bitwise : & | ^ << >>
7. ternary : ? :

*/
/*
#include<iostream>
using  namespace std;
int main()
{
    float a=12.00; 
    float b =12 ;
    cout<<(a==b);
    return 0;
}
*/ 

/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.

1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12

4.
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    |
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/