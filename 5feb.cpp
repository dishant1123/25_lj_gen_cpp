
//structure  : 

// ex :1 
/*
#include <iostream>
using namespace std;
struct student 
{
    int  id; 
    float marks; 
}; 
int main()
{
    student s1; 
    s1.id=101; 
    s1.marks =99;

    cout<<"student id : "<<s1.id<<endl;
    cout<<"student marks : "<<s1.marks<<endl;
    return 0; 
}

*/ 
// ex :2 array  with structure : 
/*
#include <iostream>
using namespace std;
struct  student
{
    string name; 
    int id; 
    int age; 
};

int main()
{
    student s[3]; 
    for(int i=0; i<3; i++)
    {
        cin>>s[i].name; 
        cin>>s[i].id;
        cin>>s[i].age;
    }
    for(int i=0; i<3; i++)
    {
        cout<<"student name : "<<s[i].name<<endl;
        cout<<"student id : "<<s[i].id<<endl;
        cout<<"student age : "<<s[i].age<<endl;
    }
    return 0; 
}
*/ 

// nested structure : 
/*
#include <iostream>
using namespace std;
struct date
{
    int  day,month,year; 
}; 
struct student 
{
    int  id; 
    date dob; 
};

int main()
{
    student s1={101,{16,10,2007}};
    
    cout<<s1.dob.month<<endl;
    cout<<s1.dob.day<<endl;
    cout<<s1.dob.year<<endl;
    return 0;
}
*/

// structure  with function  : 
/*
#include <iostream>
using   namespace std;
struct student 
{
    int  id; 
    float marks; 
};

void display(student s)
{
    cout<<"student id : "<<s.id<<endl;
    cout<<"student marks : "<<s.marks<<endl;
}

int main()
{
    student s1{101,89}; 
    student s2{102,99};
    student s3{103,100};
    display(s1);
    display(s2);
    display(s3);
    return 0; 
}
*/
/*
task  :1   update  marks  ==> add +1 marks 

task :2   array  with  structure 
    srno   name   accno   balance 
    1      nirmit 345      200 
    2      ketan  457      400
    3      jaimin 890      2000
    4      henil  123      1500 

    condition : 
    1. display  only those cutomer name  which have balance less then 500rs. 
    2. if customer balance if more than  500 then  add 1000 rs in their  balance  and  print update balance  with name. 


*/

// union : user defined data type similar to structure  but all members share the same memory location. at time  only  one member can store a value.
/*
==> its allows the storing different data type 
==> memory is shared among all members 
==> size of union = size  of largest member
==> used when only one value is  needed at a time. 

*/
// ex :1 
/*
#include <iostream>
using namespace std; 
union data 
{
    int i ; 
    float f; 
    char c;
};

int main()
{
    data d; 
    d.i =101; 
    cout<<"int value  of i is : "<<d.i<<endl;

    d.f = 10.78; 
    cout<<"float value of f is : "<<d.f<<endl;

    d.c ='a';
    cout<<"char value of c is : "<<d.c<<endl;
    return 0;
}

// a b ==> garbage value    ==> c ==>'a'

*/ 

// ex :2 
/*
#include <iostream>
using namespace std;
union data 
{
    int i; 
    float f;
    char c;
    double d;  
}; 
int main()
{
    cout<<"size of data is  : "<<sizeof(data)<<endl;
    return 0; 
}
*/

/*  structure  vs  union  
                structure                    union 
1.memory :      separate memory for       shared memory
                each member

2. size :        sum of all members        largest member
3. access :      all at same time         only one at a time
4. data safety:  high                      risky 
5. use case  :   records                  memory optimization 
*/

// ex : 3  structure  and  union
/*
#include <iostream>
using namespace std;
struct student
{
        int  idtype; 
        union 
        {
            int  rollno;
            double aadhar; 
        }id; 

};
int main()
{
    student s1; 
    s1.idtype =1; 
    s1.id.rollno =101; 
    if(s1.idtype ==1)
    {
        cout<<"rollno : "<<s1.id.rollno<<endl;
    }
    else 
    {
        cout<<"aadhar : "<<s1.id.aadhar<<endl;
    }
    return 0; 
}

*/ 

/*
6.Find the output of the following program.
int main()
{
  Float a = 5;
  switch(a)
{
     Case 5: cout <<”Interviewbit”;
     Default: cout <<”Scaler”;
  }
}
// a error  bh1 I    bh2 I    he IS    shr IS     shw IS     jai IS    nirm IS    ket     

/*
13.  What is the output of the following code snippet? 
#include <iostream>
using namespace std;
int main()

 {
    int x = 10;
    int &y = x;

    y = 20;
    cout << x << endl;
    return 0;

}
a. 10  b .20  c. 10,20  d. error 

k ==> c 
a ==> 
b ==>  j bh1  h   a  bh2 shw  shr o 
d ==>  n 
*/

/*
7.  Find the output of the following program. 
main()
{
  int a = 10, b, c;
  a = b;
  c = a;
  cout << a << “ “ <<b <<” “<< c << endl;
}
// ni  , shr , bh2 , a ,shw ,o ==> all garbage value
// he ,bh1 , ==> a 10 b c 
// jai  ==> a c 10 b 

*/

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b, c;
    a = b;
    c = a;
    cout << a << " " <<b <<" "<< c << endl;
    return 0; 
}