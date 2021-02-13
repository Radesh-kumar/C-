#include<iostream>
using namespace std;

int main() {
    int integer = 10;
    int * pointer = & integer; // Initialising Pointer
    int & reference = integer; // Reference means another name or Another path for accessing value in integer

    cout << integer << endl;
    cout << & integer << endl;
    cout << pointer << endl;
    cout << & pointer << endl;
    cout << reference << endl;
    cout << & reference << endl;

    cout << "" << endl; 

    // cout << *a << endl;  # Since a is not a pointer This is not possible
    cout << *& integer << endl; // Dereferencing Pointer: Adress -> Value
    cout << * pointer << endl;
    cout << *& pointer << endl;
    // cout << *address << endl; # Since a is not a pointer This is not possible
    cout << *& reference << endl;

}