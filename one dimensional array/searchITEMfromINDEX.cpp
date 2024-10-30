#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index;

    cout << "Enter the index to search: ";
    cin >> index;

    if (index >= 0 && index < n) {
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}