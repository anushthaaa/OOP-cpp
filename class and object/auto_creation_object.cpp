#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    static int count;

public:
    void getData() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
        count++;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Initialize static variable
int Student::count = 0;

int main() {
    Student students[10];  // can store up to 10 students
    int n = 0;             
    char choice;

    do {
        if (n < 10) {
            cout << "\nAdding student " << n + 1 << ":\n";
            students[n].getData();
            n++;
        } 
        else {
            cout << "Maximum limit reached.\n";
            break;
        }

        cout << "Do you want to add another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nAll Students\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    Student::showCount();

    return 0;
}
