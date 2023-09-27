#include<iostream>
using namespace std;
void inchesToFeet(float inch);
main(){
cout<<"Enter the measurement in inches: ";
float inches;
cin>>inches; 
inchesToFeet(inches);

}
void inchesToFeet(float inch)
{
float feet;
feet=inch/12;
cout<<"Equivalent in feet: "<<feet;
}

