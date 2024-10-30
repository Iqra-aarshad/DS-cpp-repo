#include <iostream>
using namespace std;

int main() {
    int arr[100] = {12, 45, 7, 23, 67}; 
    int n = 5; 
    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }

    cout << "Delete item: " << arr[n - 1] << endl; 

    n--;
    cout << "Elements of the array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
