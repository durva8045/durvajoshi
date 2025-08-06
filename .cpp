#include<iostream>
using namespace std;
class class2;
class class1{
int value1;
public:
    void intdata(int a){
    value1=a;
    }
    void display(void)
    {
        cout<<value1<<"\n";
    }
    friend void swaps(class1&,class2&);

};


class class2{
int value2;
public:
    void intdata(int a){
    value2=a;
    }

void display(void)
{
    cout<<value2<<"\n";
}
friend void swaps(class1&,class2&);

};

void swaps(class1&x,class2&y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
 class1 c1;
 class2 c2;
 c1.intdata(100);
 c2.intdata(200);
 cout<<"before\n";
 c1.display();
 c2.display();
 swaps(c1,c2);
  cout<<"after\n";
 c1.display();
 c2.display();
}
