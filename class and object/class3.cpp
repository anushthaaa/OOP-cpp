
#include <iostream>
using namespace std;

class book {
    private:
    string name;
    string author;
    float price;

    public:

    void getData() {
        cout << "Enter the details (name author price): ";
        cin >> name >> author >> price;
    }

    void showData() {
        cout << "\nThe entered details are:\n";
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    book book1;
    
    book1.getData();
    book1.showData();

    return 0;
}
