#include <iostream>
using namespace std;

class rectangle {
    public:
    int length, breadth;

    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void calc_area() {
        int area = length * breadth;
        cout << "The calculated area is " << area << endl;
    }
};

int main() {
    int l, b;

    cout << "enter lenght and breadth: ";
    cin >> l >> b;

    rectangle rectangle1(l, b);
    rectangle1.calc_area();
    
}