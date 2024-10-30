#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5}; 
    int arr2[] = {6, 7, 8, 9, 10}; 
    int n = sizeof(arr1) / sizeof(arr1[0]); 

    int result[n]; 
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    cout << "Array after addition:" << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}