/*
pointer : pointer is variable that stores address of another variable. 

normal variable  : ex : int a =10  ==> store only value 
pointer variable  :store address 

use : 
1.memory  address store 
2.easily manupulation array  with pointer.
3.dymanic memory allocation 
    ===> new , delete 
*/

// ex :1 
/*
#include <iostream>
using namespace std; 
int main()
{
    int  a=10 ; 
    int  *p; // ppointer decalration 
    p =&a;  // pointer  intialization 
    // int *p =&a; 

    cout<<"value  of a is  : "<<a<<endl;
    cout<<"a value using  pointer  : "<<*p<<endl;
    cout<< "address : "<<p<<endl ;
    cout<< "address : "<<&p<<endl ;  // it gives address of  pointer  itself . 
    cout<< "address : "<<&a<<endl ;
    return 0 ; 
    
}
*/ 
/*
----------------
int  a 
----
asfd5fg
----
----------------
*/

// ex :2  array  with  pointer  
/*
#include <iostream>
using namespace std; 
int main()
{
    int a[5] ={12,34,56,78,90};
    int *p =a;  // int *p =&a;

    cout<<"value of a[0] is : " <<a[0] <<endl ; 
    cout<<"using  pointer  : "<<*(p)<<endl ;
    cout<<"using  pointer  : "<<*(p+1)<<endl ;
    return 0; 
}

*/ 

// structure  with  pointer  : 

#include <iostream>
using  namespace std; 
struct student 
{
    int roll; 
    string name; 
};

int main()
{
    student s1={101,"nirmit"};
    student s2={102,"henil"};

    student *p = &s1;
    student *q = &s2; 
    cout<<"roll no  : "<<p->roll<<endl;
    cout<<"name : "<<p->name<<endl;
    
    cout<<"roll no  : "<<q->roll<<endl;
    cout<<"name : "<<q->name<<endl;
    return 0; 
}