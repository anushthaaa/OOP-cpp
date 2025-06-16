#include <iostream>
using namespace std;

int main() {
    int a, b;
    char choice;

    cout << "Choices:\n1. Sum\n2. Difference\n3. Product\n4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers of your choice: ";
    cin >> a >> b;

    switch(choice) {
        case '1':
            cout << "Sum = " << a + b << endl;
            break;

        case '2':
            cout << "Difference = " << a - b << endl;
            break;

        case '3':
            cout << "Product = " << a * b << endl;
            break;

        case '4':
            if (b != 0)
                cout << "Division = " << (float)a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;

        default:
            cout << "Invalid choice, try again!" << endl;
    }

    return 0;
}
