#include<iostream>
using namespace std;

int main() {
    int i = 65;
    // Implicit type casting our system will take care of
    char c = i;
    int * p = &i;
    cout <<" "<< endl;
    cout << i << endl;
    cout << c << endl;
    // Explicit type casting we have to define it is (char *) pointer.
    char * pc = (char*) &i;
    cout <<" "<< endl;
    cout << *p << endl; // *p = i 
    cout << *pc << endl;// *pc = char(i)
    cout << ""<< endl;
    // In C++ memory allocation always uses little Endian
    // It means it will allocate least siginificant byte from left to right
}