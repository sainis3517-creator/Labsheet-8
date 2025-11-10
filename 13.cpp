#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Function to input person details
    void inputPerson() {
        cout << "Enter name: ";
        cin.ignore(); // To handle newline from previous input
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display person details
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    float marks;

public:
    // Function to input student details
    void inputStudent() {
        inputPerson(); // Call base class function
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayStudent() {
        displayPerson(); // Call base class function
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    cout << "Enter student details:" << endl;
    s.inputStudent();

    cout << "\nStudent Information:" << endl;
    s.displayStudent();

    return 0;
}
