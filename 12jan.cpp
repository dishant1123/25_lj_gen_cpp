/*
nested  loop  : 

prime  perfect amg  twin  pelindrome  strong 
*/
// perfect : 

/*
6 factors  : 1,2,3,6   ==> sum = 1+2+3 =6 
*/
/*

#include<iostream>
using  namespace std;
int main()
{
    int start,end,sum,i,j; 
    cout<<"enter the starting number  : "; 
    cin>>start; 
    cout<<"enter the ending number  : ";
    cin>>end; 

    for(i=start; i<=end; i++) // i=12  i<= 10000
    {
        sum =0 ; // sum =0 
        for(j=1; j<i; j++)// j =4  4 <12 
        {
            if(i %j ==0) // 12 % 4 ==0 
            {
                sum =sum +j;  //  sum =10 
            }
        }
        if(sum ==i)
        {
            cout<<i<<endl;
        } 
    }
    return 0; 
}
*/ 
// pelindrome :
/*

#include<iostream>
using  namespace std;
int main()
{
    int start , end, rev ,temp; 
    cout<<"enter the starting number  : ";
    cin>>start;
    cout<<"enter the ending number  : ";
    cin>>end;
     
    for(int i=start; i<=end; i++) // i=12  i<= 10000
    {
        temp =i ;  // temp = 12
        rev =0 ; 
        while(temp > 0 )  // 1> 0 
        {
            int  r=  temp %10; // r=1 
            rev = rev *10 +r;  // rev = 21  
            temp = temp /10 ;  // temp =0
        }
        if(rev ==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
    
}
*/ 
// pattern : 

/*
1.           2.             3.            4.         5.           6.      7. 
*            * * * * *      1 2 3 4 5     * * * * *   * * * * *       *        *
* *          * * * *        2 3 4 5         * * * *    * * * *      * *       * * 
* * *        * * *          3 4 5             * * *     * * *     * * *      * * * 
* * * *      * *            4 5                 * *      * *    * * * *     * * * *
* * * * *    *              5                     *       *   * * * * *    * * * * *

*/

// 1 : 
/*

#include<iostream>
using  namespace std;
int main()
{
    int i , j; 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";  // endl; 
    }
    return 0;
}*/
//2 :
/* 
#include<iostream>
using  namespace std;
int main()
{
    int i , j; 
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<"\n";  // endl; 
    }
    return 0;
}
*/ 

//3  : 
/*

#include<iostream>
using  namespace std;
int main()
{
    int i , j; 
    for(i=1; i<=5; i++)
    {
        for(j=i; j<=5; j++)
        {
            cout<<j;
        }
        cout<<"\n";  // endl; 
    }
    return 0;
}
*/ 

//4 :
/*
* * * * * 
  * * * * 
    * * * 
      * *
        *     
*/

// #include<iostream>
// using  namespace std;
// int main()
// {
//     int i ,j,k; 
//     for(i=1; i<=5; i++)
//     {
//         for(k=1; k<i; k++)
//         {
//             cout<<"  ";
//         }
//         for(j=5; j>=i; j--)
//         {
//             cout<<" *";
//         }
//         cout<<"\n";  // endl; 
//     }
//     return 0;
// }

// 6  
/*
         * 
       * *
     * * *
   * * * *
 * * * * *     
*/
// #include<iostream>
// using  namespace std;
// int main()
// {
//     int i ,j,k; 
//     for(i=1; i<=5; i++)
//     {
//         for(k=5; k>i; k--)
//         {
//             cout<<"  ";
//         }
//         for(j=1; j<=i; j++)
//         {
//             cout<<" *";
//         }
//         cout<<"\n";  // endl; 
//     }
//     return 0;
// }
// 7 : 
// #include<iostream>
// using  namespace std;
// int main()
// {
//     int i ,j,k; 
//     for(i=1; i<=5; i++)
//     {
//         for(k=5; k>i; k--)
//         {
//             cout<<"  ";
//         }
//         for(j=1; j<=i; j++)
//         {
//             cout<<" *";
//         }
//         cout<<"\n";  // endl; 
//     }
//     return 0;
// }


#include<iostream>
using  namespace std;
int main()
{
    int i ,j,k; 
    for(i=1; i<=4; i++)
    {
        for(k=5; k>i; k--)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";  // endl; 
    }
    for(i=1; i<=5; i++)
    {
        for(k=1; k<i; k++)
        {
            cout<<" ";
        }
        for(j=5; j>=i; j--)
        {
            cout<<" *";
        }
        cout<<"\n";  // endl; 
    }
    return 0;
}