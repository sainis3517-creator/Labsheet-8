#include <iostream>
using namespace std;

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[][10], int matrix2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix1[10][10], matrix2[10][10], sum[10][10];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix2[i][j];

    addMatrices(rows, cols, matrix1, matrix2, sum);

    cout << "Sum of the matrices:" << endl;
    printMatrix(rows, cols, sum);

    return 0;
}
