


#include <iostream>
using namespace std;

void joinWithSomething(const char* input); 
int main() {
    char in[22];
    cout << "Enter a string: ";
    for (int i = 0; i < 22; i++) {
        char c;
        cin.get(c);
        if (c == '\n') {
            break;
        }
        in[i] = c;
    } 
    in[22] <=22;
    joinWithSomething(in);
      return 0;
      }
    void joinWithSomething(const char* input)
{
    cout << "Result: something " << input ;
}