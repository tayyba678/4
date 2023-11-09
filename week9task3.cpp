#include<iostream>
using namespace std;
char nextLetter(string alpha);
int main(){
cout<<"Enter a String: ";
string alphabet;
cin >>alphabet;
nextLetter(alphabet);
}
char nextLetter(string alpha)
{
int a, asciiCode ;
char b;
cout<<"Shifted String: ";
for(int c=0;alpha[c]!='\0';c++){
    char d;
        cin.get(d);
if(alpha[c]=='\n')
 {
            break;
        }
 asciiCode=alpha[c];
a=asciiCode+1;
b=a;
cout<<b;}
 
return 0;
}

