#include <iostream>
using namespace std;

class apple {
    public:
    int a;

    apple() {
        a = 10;
    }

    void display() {
        cout << a << endl;
    }

    void operator ++() {
        ++a;
    }
};

int main() {
    apple m1;
    m1.display();
    ++m1;
    m1.display();
}

/* 
sizeof, &, ., *, :?, :: scope resolution---------> cannot be overloaded
aleast one user defined data type is needed
if overloading urany operator: function doesnt take any opernd (argument)
               binary operator: onnly one operand (argument)*/