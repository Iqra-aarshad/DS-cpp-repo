#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The diagonal elements are: ";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}