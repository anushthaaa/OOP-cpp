#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    static int count; // declaration of static variable

public:
    void getData() {
        cout << "\nEnter ID and Name: ";
        cin >> id >> name;
        count++; // increment of objects ccreated
    }

    // function to show total objects created
    void countObject() {
        cout << "Total objects created: " << count << endl;
    }

    // func to display student details
    void display() {
        cout << "using static variable: "<<endl;
        cout << "ID: " << id << "\nName: " << name << endl;
    }

    // static function to show total objects created
    static void countObject_static() {
    cout << "using static function: "<< endl;
    cout << "Total objects created: " << count << endl;
    }
};

// should be declared outside the class
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.getData();
    s1.display();

    s2.getData();
    s2.display();

    s3.getData();
    s3.display();

    // calling it to show the no. of objects created... static variable
    s3.countObject();

    // for accessing static function
    Student::countObject_static();
}
