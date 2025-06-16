/*Create a class employee having private attributes: emp_id, name, and post. 
a. Create an public function setdata(). The function must accept inputs from 
user as its attributes. 
b. Create a private function showdata() to display attributes of an object. 
c. Create sn object e1  
d. Ask for the inputs of attributes for e1 and Set the data for both employees 
and print the values. */

#include <iostream>
using namespace std;

class employee {
    private:
    int emp_id;
    string name, post;

    public:
    void setData() {
        cin >> emp_id >> name >> post;
    }

    // Public function to call the private showdata
    void display() {
        showdata();
    }

    // Private function to display data
    private:
    void showdata() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID   : " << emp_id << endl;
        cout << "Name : " << name << endl;
        cout << "Post : " << post << endl;
    }
};

int main() {
    employee e1;
    int emp_id;
    string name, post;

    cout << "Enter details (ID, name, post): ";

    e1.setData();
    e1.display();
}