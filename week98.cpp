#include<iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);
int main()
{
    int num,num2;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>num;
    if(num!=2)
    cout<<"Must be 2";
    int arr[num];
    cout<<"Enter "<<num<<" elements for the first array, one per line: "<<endl;
    for(int x=0;x<num;x++)
    {
        cin>>arr[x];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>num2;
    int arra[num2];
    cout<<"Enter "<<num2<<" elements for the second array, one per line: "<<endl;
    for(int l=0;l<num2;l++)
    {
        cin>>arra[l];
    }
    insertArrayInMiddle(arr,num,arra,num2);
}
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
     int middleIndex = firstArraySize / 2;
     for (int i = firstArraySize - 1; i >= middleIndex; i--) {
        firstArray[i + secondArraySize] = firstArray[i];
    }
    for (int i = 0; i < secondArraySize; i++) {
        firstArray[middleIndex + i] = secondArray[i];
    }
    cout<<"Resulting array: [";
    int a=firstArraySize + secondArraySize;
    int b=a-1;
for (int i = 0; i < b; i++) {
        cout << firstArray[i] << ", ";
    }
  for (int i = b; i < a; i++) {  
    cout<<firstArray[i]<<"]";
}
}