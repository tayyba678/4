#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int number);
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n];
    cout << "Enter "<<n<<" numbers, one per line: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (isAlreadyEntered(numbers, i, numbers[i])) {
            cout << "Already Entered: "<<numbers[i]<<endl;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < n; i++) {
        if (!(isAlreadyEntered(numbers, i, numbers[i])))
        cout << numbers[i] << " ";
    }
    return 0;
}
bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}
