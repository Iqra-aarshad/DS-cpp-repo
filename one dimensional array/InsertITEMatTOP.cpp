#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 7, 23, 67}; 
    int n = 5; 
    int newItem = 100;
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newItem;
    n++; 

    cout << "Elements of the array after inserting at top:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

