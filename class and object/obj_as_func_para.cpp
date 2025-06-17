#include <iostream>
using namespace std;

class rect {
    private:
    int l,b;

    public:
    void Setdata() {
        cout << "enter l and b: "<< endl;
        cin >> l >> b;
    }

    void display() {
        cout << "l " << "*" << "b " << "=" << l*b;
    }


    rect add(rect r6)
    {
        rect a;

       a.l = l + r6.l;
       a.b = b + r6.b;
       return a;
    }
};

int main() {
    rect r1, r2, r3;
    r1.Setdata();
    r2.Setdata();

    r3 = r1.add(r2);
    r3.display();
}