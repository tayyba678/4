#include<iostream>
using namespace std;
void printReverseArray(int arr[],int n);
int main(){
cout<<"Enter the number of elements: ";
int number;
cin>>number;
int numb[number];
if(number<=0){
    cout<<"Invalid input. Number of elements must be greater than 0.";
return 0;}
int arr[number];
cout<<"Enter "<< number<< " numbers, one per line: "<<endl;
for(int l=0;l<number;l++)
{
    cin>>arr[l];
}
cout<<"Numbers in reverse order: ";
printReverseArray(arr,number);
return 0;
}
void printReverseArray(int arr[],int n)
{
for(int x=n-1;x>=0;x--)
{
cout<<arr[x]<<" ";
}
cout<<endl;
}
