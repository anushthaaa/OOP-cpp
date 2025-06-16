#include <iostream>
using namespace std;

class rectangle {
    public:
    int length, breadth;

    // rectangle is the constructor
    // default constructor
    rectangle() {
        length = 3;
        breadth = 4;
    }

    // parameterized constructor
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // copy constructor
    rectangle (rectangle& copied) {
        length = copied.length;
        breadth = copied.breadth;
    }

    ~rectangle() {
        cout << "destructor is called.";
    }

    void calc_area() {
        int area = length * breadth;
        cout << "The calculated area is " << area << endl;
    }
};

int main() {
    rectangle rectangle1;

    rectangle1.calc_area();

    int l, b;
    cout<<"enter lenght and breadth: ";
    cin >> l >> b;

    rectangle rectangle2(l, b);
    rectangle2.calc_area();
    
    rectangle rectangleCopy(rectangle1); // class naya_obj(kun obj kopy garne?)
    rectangleCopy.calc_area();
}

// WAP to show default copy constuctor. ----> copy constructor nalekhne ani by default aafai hune banaidine

// constructor overloading... yaa jun tin ota constructor with same name banaiyeko xa.. teslai nai constructor overloafding vaninxa
