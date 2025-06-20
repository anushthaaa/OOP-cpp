// nameless parameterized constructor

#include <iostream>
using namespace std;

class book {
private:
    int price;

public:
    // Default constructor
    book() {
        price = 50;
    }

    void display() {
        cout << "price = " << price << endl;
    }

    // Overloading prefix ++ operator
    book operator++() {
        ++price;
        return book(price);  // nameless temporary object
    }

// yaa bata nadekhne temp objt return vako hunxa through that constructor
    // Parameterized constructor
    book(int p) {
        price = p;
    }
};

int main() {
    book b1, b2;

    cout << "Before increment:" << endl;
    b1.display();

    b2 = ++b1;  // uses overloaded ++

    cout << "\nAfter increment:" << endl;
    b1.display();

    return 0;
}
