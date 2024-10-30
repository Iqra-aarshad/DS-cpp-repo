#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 7, 100, 67, 34, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "The largest number in array is: " << max << endl;

    return 0;
}