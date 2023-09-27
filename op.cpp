#include<iostream>
using namespace std;
void add(int number1, int number2);
void subtract(int number1, int number2);
void multiply(int number1, int number2);
void divide(float number1,float number2);
main()
{
int number1,number2;
char op;
cout<<"Enter 1st number: ";
cin>> number1;
cout<<"Enter 2nd number: ";
cin>> number2;
cout<<"Enter an operator (+,-,*,/): ";
cin>> op;
if(op=='+'){
add(number1, number2);
}
if(op=='-'){
subtract(number1, number2);
}
if(op=='*'){
multiply(number1, number2);
}
if(op=='/'){
 divide(number1, number2);
}
}
void add(int number1, int number2)
{
int sum=number1+number2;
cout<<"Sum: "<<sum;
}
void subtract(int number1, int number2)
{
int subtract=number1-number2;
cout<<"Subtract: "<<subtract;
}
void multiply(int number1, int number2)
{
int multiply=number1*number2;
cout<<"Mltiply: "<<multiply;
}
void divide(float number1, float number2)
{
float divide=number1/number2;
cout<<"Divide: "<< divide;
}