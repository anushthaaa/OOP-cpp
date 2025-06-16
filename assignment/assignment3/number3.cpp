#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id;
    string name;
    string post;

public:
    // a. Default constructor
    Employee() {
        emp_id = 100;
        name = "Anushtha";
        post = "Data Scientist";
    }

    // a. Parameterized constructor
    Employee(int id, string nm, string pt) {
        emp_id = id;
        name = nm;
        post = pt;
    }

    // b. Public function to display data
    void showData() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }
};

int main() {
    // c.i. Object using default constructor
    Employee e1;
    cout << "Default Employee Details (e1):" << endl;
    e1.showData();

    // c.ii. Take input from user
    int user_id;
    string user_name, user_post;

    cout << "\nEnter employee details:" << endl;
    cout << "Enter ID: ";
    cin >> user_id;
    cout << "Enter Name: ";
    cin >> user_name;
    cout << "Enter Post: ";
    cin >> user_post;

    // c.iii. Create e2 using parameterized constructor
    Employee e2(user_id, user_name, user_post);
    cout << "\nEmployee Details (e2):" << endl;
    e2.showData();

    // c.iv. Create e3 using copy constructor (default one)
    Employee e3 = e2;
    cout << "\nCopied Employee Details (e3 = e2):" << endl;
    e3.showData();

    return 0;
}
