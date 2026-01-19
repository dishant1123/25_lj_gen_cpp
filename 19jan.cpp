/*
sorting  : 
1. bubble  sort 
2. selection sort 
3. insertion sort

int a[5] = {1,5,2,7,4}     ===> asc to desc 

// 1. bubble  sort : 
*/

/*
#include<iostream>
using  namespace std;
int main()
{
    int  a[50],num,i,j,temp; 
    cout<<"enter the size of array  : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {                            //    a[0] a[1] a[2] a[3]  a[4] 
        cout<<a[i]<<" "; // a[5] =     {1,   5,   2,   7,    4} 
    }
    cout<<"\n";
    for(i=0; i<num; i++) // 0   0 <5 
    {
        for(j=i+1; j<num; j++) // j=3  3 <5 
        {
            if(a[i] < a[j])   //a[0]   < a[3]   5  < 7 
            {   
                temp =a[i];  //  temp=5
                a[i] =a[j];  // a[0]  = 7
                a[j] = temp;  // a[3] = 5  //  {7,1,2,5,4}
            } 

        }
    }
    cout<<"after sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";  
    }
    return 0; 
}
*/

// selection sort :
/*
==>finding the minimum element from unsorted array .
==> swapping it with the first unsorted position . 
==>repeating until the array is sorted .

a[5] =  {10,5,2,7,4}
*/
/*
#include<iostream>
using  namespace std;
int main()
{
    int  a[50],num,i,j,temp; 
    cout<<"enter the size of array  : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {                            //    a[0] a[1] a[2] a[3]  a[4] 
        cout<<a[i]<<" "; // a[5] =     {1,   5,   2,   7,    4} 
    }
    cout<<"\n";
    for(i=0; i<num -1 ; i++)  // 1  1 < 4
    {
        int  minindex =i;  //  minindex =  1 
        for(j = i+1; j <num ; j++) // j =5 5 < 5   
        {
            if(a[j] < a[minindex]) // a[4] < a[2]   4 < 2   
            {
                minindex =j; //    minindex=2
            }
        }
        temp =a[i];  // temp =5
        a[i] =a[minindex]; // a[1]  =2
        a[minindex] =temp;//   a[2] = 5  // {1,2,5,7,4}
    }
    cout<<"after sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";
    }
    return 0; 
}
*/ 

// sort :   ==> algorithm     STL Function : 
/*
sort(a,a+num) 
*/

#include<iostream>
#include<algorithm>
using  namespace std;
int main()
{
     int  a[50],num,i,j,temp; 
    cout<<"enter the size of array  : ";
    cin>>num; 

    for(i=0; i<num; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {                            //    a[0] a[1] a[2] a[3]  a[4] 
        cout<<a[i]<<" "; // a[5] =     {1,   5,   2,   7,    4}   num = 5 
    }
    cout<<"\n";
    // sort(a,a+num);  // asc to desc 
    
    sort(a,a+num,greater<int>());
    cout<<"after sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";
    }
    return 0; 

}