#include <iostream>
using namespace std;
int a= 50;
int *p= &a;
int main()
{
    cout << "a= " << a << endl;
    cout << "p= " <<p <<endl;
     cout << "&a= " << &a << endl;
    cout << "&p= " <<&p <<endl;
    cout << "*p= " << *p <<endl;

}