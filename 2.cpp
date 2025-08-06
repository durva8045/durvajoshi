/*
c++ -initially called c with classes by stroustroup
class - extension structure in c
structure has limitation- member are pulbic,no method
classes-structure +more
classes-have method(function) and properties(value)
classes-can make few member as private and few as public
structure in c++ are typedef
you can create object along with the class declaration
class employee{
//class definition
}harry,rohana;

harry.salary make no sense if salary is private
*/
#include<iostream>
#include<string>
using namespace std;

class binary{
    //by default private
string s;

public:
    void read(void);//declaration
    void chkbin(void);
    void ones(void);
    void display(void);
};

void binary::read(void){

cout<<"enter a binary no"<<endl;
cin>>s;
}
 void binary::chkbin(void)
 {
     for(int i=0;i<s.length();i++)
     {
         if(s.at(i)!='0'&& s.at(i)!='1')
            cout<<"incorrect binary"<<endl;
         exit(0);
     }
 }

void binary::ones(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)=='0';
        }
    }
}

void binary::display(void)
{
    cout<<"display binary no"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}


int main()
{
   binary b;
   b.read ();
   b.chkbin();
    b.display();
   b.ones();
   b.display();
}
