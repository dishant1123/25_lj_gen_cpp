/*
1. bubble  sort
2. selection sort
3. insertion sort
*/
// insertion sort  : 
/*
it works  like sorting  playing cards. 
==> take one  element  at a time . 
==> insert it into coorect position in the sorted part of the array. 
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
        cout<<a[i]<<" "; // a[5] =     {1,   5,   2,   7,    4}   num = 5 
    }
    cout<<"\n";
    for(i=1; i<num; i++) // 4  4<5 
    {
        int key = a[i];  // key =4
        j=i-1; // j=3
        while( j>=0 && a[j] >key) //  1>=0  && a[1]  2 > 4   5   > 7  
        {
            a[j+1] =a[j];  // a[3] =a[2]     // a[3]=4     
            j--; //  1
        }
        a[j+1] =key;  // a[3] = 7   // a[5] = {1,2,4,5,7}
    }
    cout<<"after sort  array  element is  : \n";
    for(i=0; i<num; i++)
    {
        cout<<a[i]<<"\n ";
    }
    return 0; 
}
*/
// 2d array : 
/*

matrix : 

*/

#include<iostream>
using  namespace std;
int main()
{
    int  a[50][50] ,row,col,i,j; 
    cout<<"enter the rows   : ";
    cin>>row;
    cout<<"enter the cols   : ";
    cin>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix : \n"; 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0; 
}   
/*
1 2 3    
4 5 6 
7 8 9

1 st row = 6  
2 nd row = 15
3 rd row = 24
1 st col =12 
2 nd col =15
3 rd col =18
*/
