#include <iostream>
using namespace std;

int main() {
    const int x = 2, y = 2, z = 2;
    int array1[x][y][z] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    
    int array2[x][y][z] = {
        {{2, 3}, {4, 5}},
        {{6, 7}, {8, 9}}
    };

    int result[x][y][z];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                result[i][j][k] = array1[i][j][k] * array2[i][j][k];
            }
        }
    }
    cout << "The result of multiplication is:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << result[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}