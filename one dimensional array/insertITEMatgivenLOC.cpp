#include <iostream>
using namespace std;

int main() {
    int arr[100] = {12, 45, 7, 23, 67};
    int n = 5; 
    int newItem = 100;
    int loc;

    cout << "Enter the location: ";
    cin >> loc;

    if (loc < 0 || loc > n) {
        cout << "Invalid location!" << endl;
        return 1;
    }

    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1]; 
    }

    arr[loc] = newItem; 
    n++; 
    cout << "Elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}