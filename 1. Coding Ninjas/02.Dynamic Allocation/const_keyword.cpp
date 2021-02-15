#include<iostream>
using namespace std;

int main() {
    // 1.Reference
    int x = 10;
    int const &ref = x;

    cout << " " << endl;
    cout << x++ << endl;
    // we can change x value
    // ref++; (Not possible)  // we cant change value of x from reference
    cout << " " << endl;


    const int i = 10;
    // We have to initialize and assign values same time (same as in case of reference)

    // 1.Pointers : 
    // Case:1 constant integer and constantant pointing integer
    int j = 20;
    // const int *p == int const *p;	// pointer to const int
    int *p = &j;
    // j++;  //Value change for constant is not possible
    cout << j << endl;
     cout << " " << endl;
    // (*p)++;  //Value change for constant is not possible

    *p++;
    cout << p << endl;
    (*p)++;
    cout << p << endl;
    cout << " " << endl;




}