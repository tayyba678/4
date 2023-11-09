#include<iostream>
using namespace std;
void word(string word);
string words;
int main (){
cout<<"Enter a word: ";
cin>>words;
word(words);
}
void word(string word){
for(int x=0;word[x]!='\0';x++){
cout<<word[x]<<" found at position "<<x<<endl;
}
}