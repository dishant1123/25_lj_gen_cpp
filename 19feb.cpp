/*
1. static memory  : memory  allocation at time  of compile. 
2. dynamic memory : memory allocation  at time of  run  using  new() and  delete(). 

*/

// ex :1  dynamic memory allocation (single variable )

/*
#include <iostream>
using namespace std;
int main()
{
    int *p;    // pointer  ==>data type is  int. 
    p =new int ;  // dynamic memory allocation

    *p =10; 

    cout<<"value  of p is  : "<<*p<<endl;


    delete p;  // freeing the memory
    return 0; 
}
*/

/*
1. new int  :  dynamic memory allocation
delete p : freeing the memory
if we don't use delete p then memory  is  leaked. 
*/


//ex :2  dynamic memory allocation (in array)

/*
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"enter the size of array : ";
    cin>>n; 

    int *p = new int [n];  // dynamic memory allocation

    cout<<"enter the array elements : "; 

    for(int i=0;i<n; i++)
    {
        cin>>p[i];
    }
    cout<<"the array elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    delete []p;  // freeing the memory
    return 0; 
}

*/ 

// malloc : 
/*
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p; 

    p= (int*) malloc(sizeof(int)); 

    if(p==NULL)
    {
        cout<<"memory not allocated"<<endl;
        return 0;
    }
    *p=100; 
    cout<<"value of p is : "<<*p<<endl;

    free(p);

    return 0;
}
*/
/*
malloc(sizeof(int)) : allocating memory  for int 1 
int* ==>typecast int
free(p) : freeing the memory
if we don't use free(p) then memory  is  leaked.

*/

// ex :3  dynamic memory allocation (in array)
/*
#include <iostream>
using namespace std;
int main()
{
    int  n,i; 
    int *arr;
    
    cout<<"enter the size of array : ";
    cin>>n;  

    arr = (int*) malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        cout<<"memory not allocated"<<endl;
        return 0;
    }

    cout<<"enter the array elements : ";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array elements are : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    free(arr);
    return 0; 

}
*/

// emp manag system  : 
/*
1.add emp 
2.update emp 
3.delete emp 
4.search emp 
5.display emp
*/

#include <iostream>
#include<string.h>
#define max 100
using namespace std;

struct emp
{
    int  id; 
    string name;
    int salary;  
};

void add(struct emp *e ,int *count)
{
    if(*count >=max) 
    {
        cout<<"no space left"<<endl;
        return; 
    }
    cout<<"enter the emp id : ";
    cin>>e[*count].id; 
    cout<<"enter the emp name : ";
    cin>>e[*count].name;
    cout<<"enter the emp salary : ";
    cin>>e[*count].salary;

    *(count)++; 
    cout<<"emp added"<<endl;
}

void search(struct emp *e , int count)
{
    int id,found =0;
    cout<<"enter the emp id to update : ";
    cin>>id; 

    for(int i=0; i<count; i++)
    {
        if(e[i].id ==id)
        {
            cout<<"enter the emp name : "<<e[i].name;
            cout<<"enter the emp salary : "<<e[i].salary;
            found =1 ;
            break;
        }
    }
    if(found ==0)
    {
        cout<<"emp not found"<<endl;
    }
}

/*
we use *count  beacuse we pass the address of count to modify the original variable 
in main(). without pointer changes will not reflect outside the function. 
*/

// ex :1 
/*
#include <iostream>
using namespace std;
void  test(int  x)
{
    x++; 
}
int main()
{
    int  a=5; 
    test(a); 
    cout<<a<<endl;
    return 0 ; 
}
// ex :2 

#include <iostream>
using namespace std;
void  test(int  *x)
{
    *(x)++; 
}

int main()
{
    int  a=5; 
    test(&a); 
    cout<<a<<endl;
    return 0 ; 
}
*/ 