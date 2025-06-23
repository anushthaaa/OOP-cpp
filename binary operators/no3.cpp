#include<iostream>
using namespace std;

class dhewa {
    int rupee, paisa;

    public:

    dhewa() {
        rupee = 1;
        paisa = 1;
    }

    dhewa(int ru, int p) {
        rupee = ru;
        paisa = p;
    }

    void display() {
        cout << "rupee = " << rupee << ", paisa = " << paisa << endl;
    }

    dhewa operator +=(dhewa d3) {
        paisa += d3.paisa;
        rupee += d3.rupee;

    }

};
int main()
{
    dhewa d1(40, 20), d2(50, 30);
    d1.display();
    d2.display();

    d1 += d2;
    // d1 = d1 / d2
    // d1 = d1.operator+=(d2);

    d1.display();

    return 0;
}