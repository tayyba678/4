#include<iostream>
using namespace std;
int findLargestNumber(int arr[], int size);
int main()
{cout<<"Enter the number of elements: ";
int num,b;
cin>>num;
int n1[num];
cout<<"Enter "<<num<<" numbers, one per line: "<<endl;
for(int i=0;i<num;i++)
{
cin>>n1[i];
}
b=findLargestNumber(n1,num);
cout<<"The largest number entered is: "<<b;
}
int findLargestNumber(int arr[], int size)
{
int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest= arr[i];
        }
    }
    return largest;
}