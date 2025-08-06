#include<iostream>
using namespace std;
int  fact(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++){
    fact*=i;
    }
    return fact;
}

int main()

{
    int n;
    cout<<"enter no"<<endl;
    cin>>n;
    cout<<"the fact of no is"<<fact(n)<<endl;
}

