#include <iostream>
using namespace std;

int main() {
    int arr[100] = {12, 45, 7, 23, 67}; 
    int n = 5; 
    cout << "Elements in the array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int loc;
    cout << "Enter the location to delete the item: ";
    cin >> loc;

    if (loc < 0 || loc >= n) {
        cout << "Invalid location!" << endl;
        return 1; 
    }

    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    cout << "Elements of the array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}