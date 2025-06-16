#include <iostream>
using namespace std;

int minNum(int, int);

int main() {
    int a, b;
    cout<<"enter two numbers: ";
    cin>> a >> b;
    cout<<"the smaller number is: "<< minNum(a,b);
    return 0;
}

int minNum(int p, int q) {
    if (p<q) 
    return p;
    else 
    return q;
    
}