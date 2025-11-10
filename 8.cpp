#include <iostream>
using namespace std;

// Function to calculate sum of diagonal elements
int sumDiagonal(int n, int matrix[][10]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Main diagonal
        sum += matrix[i][n - i - 1]; // Secondary diagonal
    }

    // If n is odd, subtract the middle element once as it is counted twice
    if (n % 2 != 0) {
        sum -= matrix[n / 2][n / 2];
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    int matrix[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int total = sumDiagonal(n, matrix);
    cout << "Sum of diagonal elements: " << total << endl;

    return 0;
}
