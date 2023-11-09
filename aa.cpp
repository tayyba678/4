#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
int main() {
    int siz;
    cout<<"Enter the size of array: ";
    cin>>siz;
    int arr[siz];
    cout<<"Enter "<<siz<<" elements of the array: "<<endl;
    for(int l=0;l<siz;l++){
    cin>>arr[siz];
    }
    int b=isSpecialArray(arr,siz);
    if(b==1)
    cout<<"The array is special";
    else if(b!=1) 
    cout<<"The array is not special";
    }
bool isSpecialArray(int arr[], int size)
{
     for (int i = 0; i < size; i++) {
        if ((i % 2 == 0 && arr[i] % 2 != 0) || (i % 2 != 0 && arr[i] % 2 == 0)) {
            return false;
        }
    }
    return true;
}