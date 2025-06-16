/*Create a class cat having private attributes: breed, color and weight. 
a. Create a public function setdetails() that accepts the data provided and 
assigns to the private attributes. 
b. Also create another public function display() that displays the attributes. 
c. Create an object c1 and assign some values of your choice to c1 and display 
the values. */

#include <iostream>
using namespace std;

class cat {
    private:
    string breed, color;
    float weight;

    public:
    void setDetails(string b, string c, float w) {
        breed = b;
        color = c;
        weight = w;
    }

    void display() {
        cout << "\nCat Details:" << endl;
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    cat c1;
    string b,c;
    float w;

    cout << "Enter the details (breed,color,weight): ";
    cin >> b >> c >> w;

    c1.setDetails(b,c,w);
    c1.display();
}