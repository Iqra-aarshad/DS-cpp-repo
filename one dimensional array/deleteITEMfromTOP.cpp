#include <iostream>
using namespace std;

int main() {
    int arr[100] = {12, 45, 7, 23, 67};
    int n = 5; 
    if (n == 0) {
        cout << "Array is empty." << endl;
        return 0;
    }
    cout << "Delete item: " << arr[0] << endl; 
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }

    n--; 
    cout << "Elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}