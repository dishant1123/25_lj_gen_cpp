/*
multiple  inheritance  : 

class a 
class b 
class c : public a, public b
*/

//ex :1 
/*
#include <iostream>
using namespace std;
class person 
{
    public : 
        int age;
        string name; 
    person(int age, string name)
    {
        this->name =name ;   // name =n 
        this->age =age; 
    }
};
class employees  
{
    private : 
        int  salary; 
    public : 
        employees(int s)
        {
            salary =s;
        }
        void show()
        {
            cout<<"salary is "<<salary<<endl;
        }
};
class manager : public person, public employees
{
    public : 
        string dept; 
    manager(int age, string name,int s,string dept):person(age,name),employees(s)
    {
        this->dept =dept;
    }
    void info()
    {
        cout<<"person name is  : "<<name<<endl;
        cout<<"person age is  : "<<age<<endl;
        employees ::show(); // show(); 
        cout<<"dept is  : "<<dept<<endl;
    }
};
int main()
{
    manager m(25,"jaimin",50000,"Research"); 
    m.info(); 
    return 0;
}
*/

// ex :2 
/*
multi level  : 

class a 
class b : public a     ===> b ==>a 
class c : public b    ===> c ==>a,b 

*/

#include <iostream>
using  namespace std;
class employees 
{
    private : 
        int emp_id; 
    protected : 
        string name;
    public : 
        employees(int id, string n)
        {
            name =n; 
            emp_id =id;
        }
    void show_id()
    {
        cout<<"employee id is "<<emp_id<<endl;
    }
};
class manager : public employees
{
    private : 
        int salary; 
    public : 
        manager(int id, string n,int s) :employees(id,n)
        {
            salary =s;
        }
    void emp_info()
    {
        show_id();
        cout<<"employee name is "<<name<<endl;
        cout<<"manager salary is "<<salary<<endl;
    }
};
class senior_manager : public manager 
{
    public : 
        string dept ; 
    senior_manager(int id, string n,int s) :manager(id,n,s)
    {
        dept ="Research";
    }
    void sr_info()
    {
        emp_info();
        cout<<"dept is "<<dept<<endl;
    }
};

int main()
{
    senior_manager sm1(101,"nirmit",90000);
    sm1.sr_info();

    manager m1(102,"jaimin",50000);
    m1.emp_info();

    return 0; 
}