#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int choice;

    // Taking input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Menu
    cout << "\nChoose an operation:\n";
    cout << "1. Sum\n";
    cout << "2. Difference\n";
    cout << "3. Remainder\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Sum = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Difference = " << num1 - num2 << endl;
            break;
        case 3:
            if(num2 != 0)
                cout << "Remainder = " << num1 % num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
