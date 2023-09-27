#include<iostream>
using namespace std;
void name(string na);
main(){
cout<<"Enter your name: ";
string nam;
name(nam);
}
void name(string na)
{
while(true)
cout<<na;
}