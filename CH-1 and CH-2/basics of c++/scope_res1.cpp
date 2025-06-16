#include <iostream>
namespace Anushtha{
    int a = 5, b= 1;
}
using namespace std;
int main() {
    int a = 0, b = 0;
    cout<<"accessing locally: "<<a<< " " << b <<endl;
    cout<<"accessing through namespace: "<< Anushtha::a <<" "<< Anushtha::b << endl;

    return 0;
    
}