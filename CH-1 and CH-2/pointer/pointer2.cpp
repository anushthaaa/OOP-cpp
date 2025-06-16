#include <iostream>
using namespace std;
int a[5];
int *p= a;
int i;
int main(){
cout << "enter the values for pointer" <<endl ;
for (i=0;i<5;i++)
{
    cin >> *(p+i) ;
}

    for (i=0;i<5;i++)
    {
    cout << "a["<<i<<"] =  "<< *(p+i) << endl;
}

}