// returning object from operator function

// #include <iostream>
// using namespace std;

// class book {
//     private:
//     int price;

//     public:
//     void setDtata() {
//         cout << "enter price of the book: ";
//         cin >> price;
//     }

//     void display() {
//         cout << "price: " << price << endl;
//     }

//     book operator ++() {
//         book some_value;
//         some_value.price = ++price;
//         return some_value;
//     }
// };

// int main() {
 
//     book book1, book2;
//     book1.setDtata();
//     book1.display();
//     book2 = ++book1;
//     book1.display();
//     book2.display();
// }


#include <iostream>
using namespace std;

class apple {
    int count;

public:
    void setData() {
        count = 1;
    }

    void display() {
        cout << "There are " << count << " apples." << endl;
    }

    // Overloading prefix decrement operator
    apple operator--() {
        apple temp;
        temp.count = --count;  // Decrement and assign to new object
        return temp;
    }
};

int main() {
    apple a1, a2;
    
    a1.setData(); // important: initialize a1

    cout << "Before decrement:\n";
    a1.display();

    a2 = --a1; // using overloaded operator

    cout << "\nAfter decrement:\n";
    a1.display();
    a2.display();

    return 0;
}
