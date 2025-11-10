#include <iostream>
using namespace std;

// Function to copy one string to another
void copyString(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0') {   // Jab tak string khatam na ho
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';   // Last me null character lagana zaroori hai
}

int main() {
    char source[50], destination[50];

    cout << "Enter a string: ";
    cin.getline(source, 50);

    copyString(source, destination);   // function call

    cout << "Copied String: " << destination;

    return 0;
}
