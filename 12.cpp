#include<iostream>
#include<string>
using namespace std;
class binary{
string s;
public:

void input()
{
cout<<"enter a no:"<<endl;
cin>>s;

}
void check()
{
    input();
    for(int i=0;i<s.length();i++){
    if(s.at(i)!='0'&& s.at(i)!='1')

exit(0);
    }
}

void ones()
{
    check();
for(int i=0;i<s.length();i++)
{
    if(s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else{
        s.at(i)='0';
    }

}

}

void display()
{
    ones();
    cout<<"the number comp is"<<s;
}


};
int main()
{
    binary b;
    b.display();

}


