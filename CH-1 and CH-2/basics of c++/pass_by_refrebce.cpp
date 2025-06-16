#include <iostream>
using namespace std;
int exchange( int &a, int &b)
{
    int temp;
    temp = a;
    a = b; 
    b = temp;
}

int main() {
    int x= 5, y= 10;
    exchange(x,y);
    cout <<"x=" <<x <<endl;
    cout <<"y=" << y <<endl;
    return 0;
}