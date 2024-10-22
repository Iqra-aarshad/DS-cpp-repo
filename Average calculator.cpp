#include <iostream>
using namespace std;

class Average {
    private:
        float num1, num2, num3;

    public:
        void inputNumbers() {
            cout << "Enter three numbers: ";
            cin >> num1 >> num2 >> num3;
        }

        void calculateAndDisplayAverage() {
            float average = (num1 + num2 + num3) / 3;
            cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << "\n";
        }
};
int main() {
    Average avg;
    avg.inputNumbers();
    avg.calculateAndDisplayAverage(); 

    return 0;
}
