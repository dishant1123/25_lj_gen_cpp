/*
friend  function  : a friend function is a  function  that is not member of class but  still can access private and  protected member of class.

friend data_type function_name(class_name obj);

*/

// ex :1 

#include <iostream>
using namespace std;
class student 
{
    private : 
        int marks ; 
    public : 
        student()
        {
            marks =90; 
        }
    friend void show(student s1); // friend function decalration
};
void show(student s1)
{
    cout<<"student marks is  : "<<s1.marks<<endl;
}
int  main()
{
    student s1; 
    show(s1);
    return 0; 
}