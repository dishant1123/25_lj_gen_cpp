
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