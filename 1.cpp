#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {
    if(n <= 1)
        return false;   // 1 aur negative numbers prime nahi hote

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return false;  // agar divisible hai to prime nahi
    }
    return true;  // agar loop ke baad divisible nahi mila to prime hai
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isPrime(num))
        cout << num << " is a Prime Number.";
    else
        cout << num << " is NOT a Prime Number.";

    return 0;
}
