#include <iostream>
using namespace std;
void jazzifyChords(string chords[], int numChords);
int main()
{
    cout << "Enter the number of chords: ";
    int num;
    string n1[num];
    cin >> num;
    cout << "Enter " << num << " chords, one per line:";
    for (int i = 0; i < num; i++)
    {
        cin >> n1[i];
    }
    cout << endl;
    jazzifyChords(n1, num);
}
void jazzifyChords(string chords[], int numChords)
{
    for (int l = 0; l<numChords ; l++)
    {
        if (chords[l] == 7)
        {
            cout << chords[l] << " 7";
        }
        else
        {
            cout << chords[l];
        }
    }
}