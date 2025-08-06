#include<iostream>
using namespace std;
class teacher
{
private:
     double salary;
    public:
        //non perametrized
        teacher()
        {
            dept="comp";
        }
    //parametrized
    teacher(string n,string d,string s,double sal)
    {
        name =n;
        dept =d;
        sub=s;
        salary=sal;
    }


    string name;
    string dept;
    string sub;


    void changedept(string newdept){
    dept=newdept;

    }
  void getinfo()
  {
      cout<< "name:"<<name<<endl;
      cout<<"sub"<<sub<<endl;
  }

};

int main()
{
   teacher t1("duru","cmp","c++",3554);
t1.getinfo();
}
