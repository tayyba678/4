#include<iostream>
using namespace std;
void howManyStickers(int length);
main(){
cout<<"Enter the side length of the Rubik's Cube: ";
int len;
cin>>len;
howManyStickers(len);
}
void howManyStickers(int length)
{
int stick;
stick=length*length*6;
cout<<"Number of stickers needed: "<<stick;
}
