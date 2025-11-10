#include <iostream>
using namespace std;

// Function to swap two numbers using call-by-reference
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapNumbers(x, y);  // Pass by reference

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
