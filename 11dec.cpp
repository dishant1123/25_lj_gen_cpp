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
