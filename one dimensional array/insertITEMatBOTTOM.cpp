#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 23, 67};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int newItem = 100;
    arr[n] = newItem; 
    n++;
    cout << "Elements of the array after inserting at end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
