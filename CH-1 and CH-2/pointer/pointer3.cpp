#include <iostream>
using namespace std;
int i;
int a[5]={10,15,20,25,30};
int *p = a;
void display(int arr[5])
{
    for (int i=0;i<5;i++)
    {
       cout << "a["<<i<<"] =  "<< *(p+i) << endl; 
    }
}

int main()
{
   // by pointer
   display (p);
   // sized array
   display (a);
   // unsized array
   display(a);

}

// we are pro max tax fax