#include <iostream>
using namespace std;

int main() {
    int celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "The temperature in Fahrenheit is: " << fahrenheit << "\n";

    return 0;
}