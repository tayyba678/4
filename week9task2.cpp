#include<iostream>
using namespace std;
string words[5];
void reverse(string words);
int main(){
string word;
cout<<"Enter a string: ";
cin>>word;
reverse(word);
}
void reverse(string words){
    cout<<"Reversed String: ";
for(int x=4;words[x]!='\0';x--)
{
cout<<words[x];
}
}