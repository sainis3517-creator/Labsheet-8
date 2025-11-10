#include <iostream>
#include <string>
using namespace std;

// Function to count number of words in a string
int countWords(const string &str) {
    int count = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            if (!inWord) {
                inWord = true;  // Start of a new word
                count++;
            }
        } else {
            inWord = false;  // End of a word
        }
    }
    return count;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int numWords = countWords(text);
    cout << "Number of words: " << numWords << endl;

    return 0;
}
