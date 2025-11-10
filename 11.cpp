#include <iostream>
#include <string>
using namespace std;

// Class definition
class Car {
private:
    string brand;
    float price;

public:
    // Member function to input car details
    void inputDetails() {
        cout << "Enter brand: ";
        cin.ignore(); // Ignore leftover newline
        getline(cin, brand);
        cout << "Enter price: ";
        cin >> price;
    }

    // Member function to display car details
    void displayDetails() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car cars[n]; // Array of Car objects

    // Input details for each car
    for (int i = 0; i < n; i++) {
        cout << "\nCar " << i + 1 << " details:" << endl;
        cars[i].inputDetails();
    }

    // Display details of each car
    cout << "\nCar Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Car " << i + 1 << ": ";
        cars[i].displayDetails();
    }

    return 0;
}
