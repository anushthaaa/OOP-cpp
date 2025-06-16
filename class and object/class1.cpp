#include <iostream>
using namespace std;
// class defination

class student{
    public:
    // data members
    int roll;
    string name;

    // member functions
    void display() {
        cout<<"Name: "<< name <<endl << "Roll no: "<<endl;
    }
};

int main() {

    return 0;
}