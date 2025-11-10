#include <iostream>
#include <string>
using namespace std;

// Class definition
class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    // Member function to input student details
    void inputDetails() {
        cout << "Enter name: ";
        cin.ignore(); // To ignore any leftover newline
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;  // Create a Student object

    s.inputDetails();    // Input details
    s.displayDetails();  // Display details

    return 0;
}
