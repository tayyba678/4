#include<iostream>
using namespace std;
void evenOrOdd(int no);
main(){
cout<<"Enter a number: ";
int num;
cin>>num;
evenOrOdd(num);
}
void evenOrOdd(int no)
{
if(no%2==0)
{
cout<<"Number "<<no<<" is even";
}
if(no%2==1)
{
cout<<"Number "<<no<<" is odd";
}
}


