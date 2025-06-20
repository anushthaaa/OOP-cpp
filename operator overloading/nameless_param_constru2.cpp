#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Default constructor
    Student() {
        name = "Anushtha";
        roll = 1;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }

    // Overloading prefix ++ operator
    Student operator++() {
        ++roll;
        return Student(name, roll);  // nameless temporary object
    }
};

int main() {
    Student s1, s2;

    cout << "Before increment:\n";
    s1.display();

    s2 = ++s1;  // using overloaded prefix ++

    cout << "\nAfter increment:\n";
    s2.display();

    return 0;
}
