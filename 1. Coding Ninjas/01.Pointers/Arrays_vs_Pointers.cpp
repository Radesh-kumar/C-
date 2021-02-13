#include<iostream>
using namespace std;
int main() {
    int a[10];

    // After initialisation and before allocation
    // Everythin is just base index
    cout << a << endl;
    cout << &a << endl;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << "" << endl;

    // After allocation
    a[0] = 10;
    a[1] = 20;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << "" << endl;


    // Pointer vs Array
    int *p = a;
    cout << a << endl;
    cout << p << endl;

    // Accessing array using pointer
    cout << *p << endl; // *p = a[0]
    cout << *p + 1 << endl; // *p + 1 = a[0] + 1
    cout << *(p + 1) << endl; // *(p + 1) = a[1]
    cout << a[0] << endl;

}