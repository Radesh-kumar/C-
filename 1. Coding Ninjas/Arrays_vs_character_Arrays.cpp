#include<iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};
    char b[] = "abc";

    int *p_a = &a[0];
    char *p_b = &b[0];


    // int arrays prints address
    // char arrays prints the contents of the array
    cout << "" << endl;
    cout << a << endl;
    cout << b << endl;
    // If we need to print address explicitly
    cout << &b << endl;
    cout << "" << endl;



}