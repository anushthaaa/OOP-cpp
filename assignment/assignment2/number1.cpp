/* Create a class rectangle having public attributes: length and breadth. 
a. Create a public function calc_area(). That calculates and displays area as 
l*b. 
b. Create an object r1 and set its length and breadth to 17 and 4 respectively. 
c. Calculate and print the area of object r1. */

#include <iostream>
using namespace std;

class rectangle {
    public:
    int length, breadth;

    void getData() {
        cout<<"Enter lenght and breadth: ";
        cin >> length >> breadth ;
    }

    void calc_area() {
        int area = length * breadth;
        cout << "The calculated area is " << area;
    }
};

int main() {
    rectangle rectangle1;

    rectangle1.getData();
    rectangle1.calc_area();
}