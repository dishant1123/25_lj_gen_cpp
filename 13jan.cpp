/*
array : == >1 d array : 

int  a[5]  = {1,2,3,4,5}
index : 0 

int  a[5] ={1,2,3} 
cout<<a[4] ==> 
*/
// update  in array  : 
/*

int  a[5] = {1,6,2,5,4} 

user =66 
index :2 
after  update  :{1,6,66,5,4} 
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int a[50] ,num,ele,index; 
    cout<<"enter the size of array  : ";
    cin>>num; 
    for(int i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update  array  element is  : \n";
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";  // a[5] = {1,6,2,3,7}
    }
    cout<<"enter the element to be updated  : ";
    cin>>ele; // 66
    cout<<"enter the index to be updated  : ";
    cin>>index; //2
    a[index] =ele;   //   a[2] =66
    cout<<"after update  array  element is  : \n";
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<" ";  // a[5] = {1,66,2,3,7}
    }
    return 0; 
}

*/ 

// insert : 
/*
int  a[5] = {1,6,2,5,3} 

user  insert =77 
user index : 2 

after  insert : {1,6,77,2,5,3}
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int a[50] ,num,ele,pos; 
    cout<<"enter the size of array  : ";
    cin>>num; 
    for(int i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before update  array  element is  : \n";
    for(int i=0; i<num; i++)
    {                            //    a[0] a[1] a[2] a[3]  a[4] a[5]
        cout<<a[i]<<"\n ";  // a[5] = {1,    6,   77    2      3,   7}
    }
    cout<<"enter the element to be inserted  : ";
    cin>>ele;  // 77
    cout<<"enter the index to be inserted  : ";
    cin>>pos;  //2 

    for(int i=num;i>pos; i--) // i=2 2  >2 
    {
        a[i]=a[i-1]; // a[3] = a[2]
    }
    a[pos] =ele;  // a[2] = 77
    num++;
    cout<<"after insert new element in array is  : \n";
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";  // a[5] = {1,    6,   77    2      3,   7}
    }
    return 0; 
}

*/ 
// remove duplicate  in array  : 
/*
int  a[5] = {1,2,1,2,5 }

duplicate element is  : 1,2 

after  remove duplicate  :  {1,2,5}
*/

#include<iostream>
using  namespace std;
int main()
{
    int a[50] ,num,ele,pos; 
    cout<<"enter the size of array  : ";
    cin>>num; 
    for(int i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before remove  duplicate  array  element is  : \n";
    for(int i=0; i<num; i++)
    {                            //    a[0] a[1] a[2] a[3]  a[4] a[5]
        cout<<a[i]<<"\n ";  // a[6] = {1,    2,   2     3,   7}
    }

    cout<<"remove  duplicate  element is  : \n"; 
    for(int i=0; i<num; i++) // 1   1 < 5 
    {
        for(int j=i+1; j<num; j++)// j=2  2 <5 
        {
            if(a[i] ==a[j]) // a[1] ==a[2]   2==2 
            {
                for(int  k=j; k<num-1; k++) // k=5  5 <5  
                {
                    a[k] =a[k+1];  // a[4] = a[5]
                }
                num--;  // 5
                j--; // 1
            }
        }
    }
    cout<<"after remove  duplicate  array  element is  : \n";
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";  // a[6] = {1,    2,   2     3,   7}
    }
    return 0; 
}

// hw : 1. insert 2. update 3. delete  4 remove duplicate  make  menu driven program. 

