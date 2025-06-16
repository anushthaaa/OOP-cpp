#include <iostream>
using namespace std;

class book {
private:
    string name;
    string author;
    float price;

public:
    void getData(string n, string a, float p) {
        name = n;
        author = a;
        
        price = p;
    }

    void showData() {
        cout << "\nThe entered details are:\n";
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string n, a;
    float p;

    cout << "Enter book details (name author price): ";
    cin >> n >> a >> p;

    book book1;
    book1.getData(n, a, p);
    book1.showData();

    return 0;
}

