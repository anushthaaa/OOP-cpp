#include <iostream>
using namespace std;
int main() {
    int a, i=0;
    cout<<"Enter the number's multiple you want: ";
    cin >> a;
    while (i <= 10) {
        cout << a << " * " << i << "=" << a*i <<endl;
        i++;
    }

    return 0;
}