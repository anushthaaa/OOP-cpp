#include<iostream>
using namespace std;

class samaya {
    int hour, minutes;

    public:
    // default constructor
    samaya() {
        hour = 1;
        minutes = 1;
    }

    // parameterized constructor
    samaya(int hr, int min) {
        hour = hr;
        minutes = min;
    }

    void display() {
        cout << hour << ":" << minutes << endl;
    }

    samaya operator - (samaya s4) {
        samaya temp;
        temp.hour = hour - s4.hour;
        temp.minutes = minutes - s4.minutes;

        return temp;
    }
 
};
int main()
{
    samaya s1(5, 55), s2(4, 44), s3;
    s1.display();
    s2.display();
    s3 = s1 - s2;
    s3 = s1.operator-(s2);
    s3.display();

    return 0;
}

// same for += -= /= *= but call garda chai s1 += s2 lekhnu paryo .. duita matra obj chaine vay0

