// operloading unary prefix operator

// #include <iostream>
// using namespace std;

// class test{
//     private:
//     int n;

//     public:
//     test() {
//         n = 12;
//     }

//     test(int n1) {
//         n = n1;
//     }

//     void display() {
//         cout << n;
//     }

//     test operator ++() {
//         ++n;
//         return test(n);
//     }
// };

// int main() {
//     test t1, t2;
//     t2 = ++t1;
//     t1.display();
//     t1.display();

// }



// operloading unary postfix operator

#include <iostream>
using namespace std;

class test{
    private:
    int n;

    public:
    test() {
        n = 12;
    }

    test(int n1) {
        n = n1;
    }

    void display() {
        cout << n;
    }

    test operator ++(int) {
        n++;
        return test(n);
    }
};

int main() {
    test t1, t2;
    t2 = t1++;
    t1.display();
    t1.display();

}