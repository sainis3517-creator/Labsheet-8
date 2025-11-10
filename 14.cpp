#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    int intResult = calc.add(10, 20);         // Calls add(int, int)
    double doubleResult = calc.add(5.5, 3.2); // Calls add(double, double)

    cout << "Sum of integers: " << intResult << endl;
    cout << "Sum of doubles: " << doubleResult << endl;

    return 0;
}
