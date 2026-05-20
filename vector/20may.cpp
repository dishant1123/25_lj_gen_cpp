/*
vector : array 

push : add element 
pop  : remove  element last 
*/

// ex :1 

#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    vector<int> v;  

    // add element in vector : 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<"vector element is : "<<"\n";
    
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v[i]<<"\n";
    }
    
    // cout<<"first  element is : "<<v[0]<<endl;

    // v.insert(v.begin()+1,90); 
    // v.erase(v.begin()+2);
    v.pop_back();
    cout<<"after  insert vector element is : "<<"\n";
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v[i]<<"\n";
    }
    return 0;
}