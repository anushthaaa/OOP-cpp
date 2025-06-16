#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    char choice;
    
    do {
    cout <<"Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum =" << a + b << endl;

    cout<<"Do you want to continue?(Y/N): ";
    cin>> choice;
    }
    while (choice == 'Y' || choice == 'y');

    cout<<"Thankyou!!"<<endl;

    return 0;
}
