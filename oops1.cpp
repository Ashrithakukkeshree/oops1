#include <iostream>
#include <string>
using namespace std;

class bankaccount
{
    public:
    string name;
    int accnumber;
    float balance;

public:
void openaccount()
{
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter acc number"<<endl;
cin>>accnumber;
cout<<"enter balance"<<endl;
cin>>balance;
}
void deposite()
{
    float amount;
    cout<<"enter the amt to be deposited"<<endl;
    cin>>amount;
    balance=balance+amount;
    cout<<"balance withdrawed";
}
void withdrawal()
{
    float amount;
    cout<<"enter the amt to withdraw"<<endl;
    cin>>amount;
    if(amount<=balance)
    {
        balance=balance-amount;
        cout<<"balance is"<<balance<<endl;
    }
    else 
    {
        cout<<"ensufficient balance";
    }
}
void check_balance()
{
    cout<<"total balance is "<<balance<<endl;
}
};

int main()             
do {
    switch(choice)
    {
        case 1:
        b.deposite();
        break;
        case 2:
        b.withdrawal();
        break;
        case 3:
        b.check_balance();
        break;
        case 4:
        cout<<"tank you for using our bank";
        break;
        default:
        cout<<"invalid";

    }
}