#include <iostream> 
using namespace std; 
class bank{
int accountno;
float balance;

public:

void initialize()
{
    cout<<"enter account no:";
    cin>>accountno;
    cout<<"enter the balance:";
    cin>>balance;
}

void deposite()
{
    float amount;
    cout<<"enter the amount to enter";
    cin>>amount;
    balance+=amount;
}


void withdraw()
{
float amount;
cout<<"enter amount to withdraw:";
cin>>amount;

if(amount>balance)
{
    cout<<"insufficient";
}
else{

    balance-=amount;
}

}


void display()
{

    cout<<"account no"<<accountno;
    cout<<"current balance"<<balance;

}





};



int main() 
{ 
bank b;
b.initialize();
b.deposite();
b.withdraw();
b.display();
}