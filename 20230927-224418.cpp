#include<iostream>
using namespace std;
void calculatePayableAmount(string day, float am);
int main(){
cout<<"Enter the day of purchase: ";
string da;
float amt;
cin>> da;
cout<<"Enter the total purchase amount: $";
cin>>amt;
calculatePayableAmount(da, amt);
}
void calculatePayableAmount(string day, float am)
{
if(day=="Sunday")
{
float amount,p;
amount=am*0.1;
p=am-amount;
cout<<"Payable Amount: $"<<p;
}
if(day!="Sunday")
{
int amount;
amount=am;
cout<<"Payable Amount: $"<<amount;
}
}
