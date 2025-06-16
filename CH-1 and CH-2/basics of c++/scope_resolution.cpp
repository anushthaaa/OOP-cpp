#include<iostream>
using namespace std;
int global = 1;
int main() {
    int global = 2;
    :: global = 1;
    cout<<"Global count= "<< :: global<< endl;
    global = 3;
    cout<<"Local count = "<< global << endl;

    return 0;

}