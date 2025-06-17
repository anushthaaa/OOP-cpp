#include <iostream>
using namespace std;

class complex{
    private:
    int real, img;

    public:
    void getData() {
        cout << "enter real and img part: "<< endl;
        cin >> real >> img;
    }

    void display() {
        cout << real << "+i" << img << endl;
    }

    complex addComplex(complex c)
    {
        complex a;

        a.real = real + c.real;
        a.img = img + c.img;
        return a;
    }
};

int main() {
    complex c1, c2, c3;
    c1.getData();
    c2.getData();

    c3 = c2.addComplex(c1);
    c3.display();
}