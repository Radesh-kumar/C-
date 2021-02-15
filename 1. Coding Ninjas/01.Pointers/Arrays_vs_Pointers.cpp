#include<iostream>
using namespace std;
int main() {
    int a[10];

    // If int a[10]; => *p = a 
    // Not recommended always use & when initialising pointers
    // *p = &a 
    // If int a[] = {...} => *p = &a[0]

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
    cout << "" << endl;

    // Accessing array using pointer
    cout << *p << endl; // *p == a[0]
    cout << *p + 1 << endl; // *p + 1 == a[0] + 1
    cout << *(p + 1) << endl; // *(p + 1) == a[1]
    cout << a[0] << endl;
    cout << "" << endl;

    // Size of pointers vs Array
    cout << "Size of array: " <<  sizeof(a) << endl;
    cout << "Size of pointer: " <<  sizeof(p) << endl;
    cout << "" << endl;

    // Array has no seperate address(only one address) a == &a
    // where as pointers has seperate address in p != &p
    cout << p++ << endl;
    cout << *p << endl;

    // cout << &p++ << endl;
    // cout << a++ << endl;

    // These are illegal operations we can't change the values
    // in the Symbol table once assigned
    
}   
