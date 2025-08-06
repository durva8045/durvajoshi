#include<iostream>
using namespace std;
class bank{


private:
    int acountno;
    float balance;

public:
    void initialize(int accno,float bal)
    {
        acountno=accno;
        balance=bal;
    }

    void depo(float amount){
    if(amount>0)
    {
        balance+=amount;
        cout<<"amount depo succes";
    }
    else{
        cout<<"invalid depo"<<endl;
    }

    }




    void with(float amount){
    if(amount>0&& amount<=balance)
    {
        balance-=amount;
        cout<<"amount with succes";



    }
    else{
        cout<<"insufficient withdraw"<<endl;


    }
    }


    void display(){

    cout<<"acc no"<<acountno<<endl;
    cout<<"balance"<<balance<<endl;

    }



};

int main()
{
    bank b1;
    int accno;
    float bal,depo,with;
    cout<<"enter account no"<<endl;
    cin>>accno;
    cout<<"enter balance amount"<<endl;
    cin>>bal;
    b1.initialize(accno,bal);


    cout<<"enter depositie"<<endl;
    cin>>depo;
    b1.depo(depo);

    cout<<"withdraw"<<endl;
    cin>>with;
    b1.with(with);

    cout<<"account info"<<endl;
    b1.display();

}
