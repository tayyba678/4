#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){
cout<<"Enter the distance: ";
float d;
cin>>d;
calculateFuel(d);
}
void calculateFuel(float distance)
{
float fuel;
fuel=distance*10;
cout<<"Fuel needed: "<<fuel;
}
