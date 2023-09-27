#include<iostream>
using namespace std;
void calculateFuel(int di);
main(){
cout<<"Enter the distance: ";
float dis;
cin>>dis;
calculateFuel(dis);
}
void calculateFuel(int di)
{
int fu,t;
fu=di*10;
if(fu<=100)
{
t=100;
cout<<"Fuel needed: "<<t;
}
fu=di*10;
if(fu>=100)
{
t=fu*10;
cout<<"Fuel needed: "<<t;
}
}