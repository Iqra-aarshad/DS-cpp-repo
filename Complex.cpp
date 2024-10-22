#include <iostream>
using namespace std;

class Complex {
    private:
        float real; 
        float imaginary;

    public:
        Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

        void display() {
            cout << real << " + " << imaginary << "i";
        }

        Complex add(const Complex& other) {
            return Complex(real + other.real, imaginary + other.imaginary);
        }

        Complex subtract(const Complex& other) {
            return Complex(real - other.real, imaginary - other.imaginary);
        }

        Complex multiply(const Complex& other) {
            return Complex(
                (real * other.real - imaginary * other.imaginary),
                (real * other.imaginary + imaginary * other.real)
            );
        }
};

int main() {
    float r1, i1, r2, i2;

    cout << "Enter the real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter the real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);
    Complex product = c1.multiply(c2);

    cout << "Sum: ";
    sum.display();
    cout << "\nDifference: ";
    difference.display();
    cout << "\nProduct: ";
    product.display();
    cout << endl;

    return 0;
}