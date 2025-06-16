#include <iostream>
using namespace std;
int n;
int i;
int main()
{
    cout << "enter total no of student" <<endl;
    cin >> n;
    float *m= new float[n];
    for (i=0; i<n; i++)
    {
        cout << "enter" << i+1 << "th Number: " <<endl;
        cin >>  *(m+i);
    }
     for (i=0; i<n; i++)
    {
        cout << "enter" << i+1 << "th student is: " << *(m+i) <<endl;
    }

}