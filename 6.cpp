#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevent overflow

        if (arr[mid] == key) {
            return mid; // Element found at index mid
        } 
        else if (arr[mid] < key) {
            low = mid + 1; // Search in right half
        } 
        else {
            high = mid - 1; // Search in left half
        }
    }
    return -1; // Element not found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
