#include <iostream>
using namespace std;

class user{

    public:
    int id;
    string name;
    int phone;

    void getData()
    {
        cout<< "Enter the details: ";
        cin >> id >> name >> phone;

    }

    void showData()
    {
        cout << "\nThe entered details are :\n " << endl;
        cout << "Roll: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone;
    }

};

int main() {
    // class_name validIdentifier
    user user1; // object of class user
    user1.id;
    user1.name;
    user1.phone;
    user1.getData();
    user1.showData();


    return 0;
}
