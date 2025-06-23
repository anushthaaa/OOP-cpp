#include<iostream>
using namespace std;

class  samaya {
    int hour, minute;

    public:
    // default constructor
    samaya() {
        hour = 1;
        minute = 1;
    }

    // parameterized constructor
    samaya(int hr, int min) {
        hour = hr;
        minute = min;
    }

    void display() {
        cout << hour << ":" << minute << endl;
    }

    samaya operator + (samaya s4) {
        samaya temp;
        temp.hour = hour + s4.hour;
        temp.minute = minute + s4.minute;

        return temp;
        // return samaya(temp.hour, temp.minute)
    }

    // nameless

    /* int hrs = hour + s4.hour;
    int mins = minute + s4.minutes;
    return samaya(hrs, mns)
*/

    
};

int main()
{
    samaya s1(2,40), s2(10,50), s3;
    s1.display();
    s2.display();

    s3 = s1 + s2;
    // obj aat the left of the operator is used as one of the operand and other one is passed as an argument
    s3 = s1.operator+(s2);
    s3.display();

    return 0;
}