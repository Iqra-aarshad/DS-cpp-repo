#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index, newValue;

    cout << "Enter the index to update: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;

    if (index >= 0 && index < n) {
        arr[index] = newValue; 
    } else {
        cout << "Invalid index!" << endl;
        return 1; 
    }
    cout << "Updated array:";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    return 0;
}