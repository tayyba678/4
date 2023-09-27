#include<iostream>
using namespace std;
void calculateFuel(int distance)
{
int fuel;
fuel=distance*10;
cout<<"Fuel needed: "<<fuel;
}
main(){
cout<<"Enter the distance: ";
int d;
cin>>d;
calculateFuel(d);
}
