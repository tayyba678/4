#include<iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main()
{
    double num[4],qc,dc,pc,nc,t;
bool h;
cout<<"Enter quarters: ";
cin>>qc;
int a=qc/100;
num[0]=qc/a;
cout<<"Enter dimes: ";
cin>> dc;
int b=dc/100;
num[1]=dc/b;
cout<<"Enter nickels: ";
cin>> nc;
int c=nc/100;
num[2]=nc/c;
cout<<"Enter pennies: ";
cin>> pc;
int d=pc/100;
num[3]=pc/d;
cout<<"Enter the total amount due: $";
cin>>t;
h=canPayWithChange(num,t);
cout<<"Can you pay the amount? ";
if(h==1)
cout<<"Yes";
else
cout<<"No";
}
bool canPayWithChange(double change[], double totalDue)
{
    double sum=0;
    for(int x=0;change[x]!='\0';x++)
    {
        sum=sum+change[x];
    }
    if(sum>=totalDue)
    return 1;
    else
    return 0;
}