#include<iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number);
int main()
{
cout<<"Enter the number of elements: ";
int n,n1,arr[n];
bool already entered 
cin>>n;
cout<<"Enter "<<n<<" numbers, one per line: ";
for(int num=0;num<n;n++)
{
cin>>n1;
if(isAlreadyEntered(arr,num,n)){
cout<<"Already Entered"<<endl;
}
else{
arr[num]=n;
}
}