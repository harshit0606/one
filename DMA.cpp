#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int;          //allocation of memory

    cout<<"Enter a value"<<endl;
    cin>>*ptr;

    cout<<"Value entered : "<<*ptr<<endl;

    delete ptr;             //deallocating memory

    cout<<"Value on the same memory location after deleting : "<<*ptr;

    return 0;
}