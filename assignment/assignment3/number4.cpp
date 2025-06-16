#include <iostream>
using namespace std;

class Tracker {
    private:
    string item;
    int price;
    string date;
    string note;

    public:

    // Parameterized constructor
    Tracker(string i, int p, string d, string n) {
        item = i;
        price = p;
        date = d;
        note = n;
    }

    void showTracks() {
        cout << "Item: " << item << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Date: " << date << endl;
        cout << "Note: " << note << endl;
    }

    ~Tracker() {
        cout << "Destructor executed.";
    }
};

int main() {
    // i. Create object using parameterized constructor
    Tracker t1("Phone", 25000, "2025/06/15", "Upgraded from old phone");
    cout << "Details of t1 (parameterized):" << endl;
    t1.showTracks();

    // ii. Create another object using default copy constructor
    Tracker t2 = t1;
    cout << "\nDetails of t2 (copied from t1):" << endl;
    t2.showTracks();

    return 0;



}