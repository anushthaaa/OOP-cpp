#include <iostream>
#define PI 3.14
using namespace std;

float areaOfCircle(int r);

int main() {
    int r, area;
    cout<<"Enter the radius of circle: ";
    cin>> r;
    area = areaOfCircle(r);
    cout << "Area of circle = " << area << endl;
    return 0;
}

float areaOfCircle(int r) {
    return PI * r* r;
}
