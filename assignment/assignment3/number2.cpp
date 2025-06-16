#include <iostream>
using namespace std;

class dog {
    private:
    string breed, color;
    float weight;

    public:
    // default constructor
    dog() {
    breed = "Husky";
    color = "Brown";
    weight = 3.5;
    }
    
    // b. Public function to set details from user
    void setDetails(string b, string c, float w) {
        breed = b;
        color = c;
        weight = w;
    }

    // c. function to display details
    void display() {
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }        
};

int main() {
    // d.i. Create object c1 and display default values
    dog d1;
    cout << "Default Cat Details:" << endl;
    d1.display();

    dog d2;
    string breed, color;
    float weight;
    cout << "Enter the details: ";
    cin >> breed >> color >> weight;

    d2.setDetails(breed, color, weight);
    d2.display();

}