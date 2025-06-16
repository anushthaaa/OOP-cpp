#include <iostream>
using namespace std;
int main() {
    int a = 6, b = 7, temp;
    cout<<"Before swap: "<< a << b;
    temp = a;
    a = b;
    b = temp;
    cout<<"\nAfter swap: "<< a << b;

    return 0;
}