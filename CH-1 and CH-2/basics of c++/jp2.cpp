// program to use ternary operator
// can include another files's function by simply including it on the preprocessor directive

#include <iostream>
#include <string>  
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    string result = (marks >= 40) ? "Pass" : "Fail";

    cout << "You " << result << " the exam." << endl;
    return 0;
}
