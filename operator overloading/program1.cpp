// operator overloaing

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

    void operatorFunction() {

    }
};

int main() {
    apple m1;
    m1.display();
    m1.a++;
    m1.display();
}

/* syntax
return-type operator op(arguments)
{
logic
}

operator : keyword
op : operator to overload (+,-,++,--)
*/