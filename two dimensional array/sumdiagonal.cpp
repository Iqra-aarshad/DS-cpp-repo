#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    cout << "The sum of diagonal elements is: " << sum << endl;

    return 0;
}