#include <iostream>
using namespace std;

// Function to print Fibonacci Series
void fibonacci(int n) {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";    // pehla number print
        c = a + b;           // next term
        a = b;               // update values
        b = c;
    }
}

int main() {
    int terms;
    cout << "Enter how many terms you want: ";
    cin >> terms;

    fibonacci(terms);   // function call

    return 0;
}
