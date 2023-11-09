#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
int main(){
cout<<"Enter the number of resistors in the series circuit: ";
int num;
cin>>num;
double sum, n[num];
cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line:"<<endl;
for(int x=0;x<num;x++)
{
cin>>n[x];
}
sum=calculateTotalResistance(n,num);
cout<<"The total resistance of the series circuit is "<<sum<< " ohms.";
}

double calculateTotalResistance(double resistance[], int size)
{
double sum=0;
for(int l=0;resistance[l]<=size;l++)
{
sum=sum+resistance[l];
}
return sum;
}