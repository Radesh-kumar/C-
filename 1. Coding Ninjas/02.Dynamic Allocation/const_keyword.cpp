#include<iostream>
using namespace std;

int main() {
    // We have to initialize and assign values same time while using const (same as in case of reference)
    const int i = 10;

    // 1.Reference
    int x = 10;
    int const &ref = x;

    cout << " " << endl;
    cout << "x = " <<x++ << endl;
    // we can change x value
    // ref++; (Not possible)  // we cant change value of x from reference
    cout << " " << endl;

    // 2.Pointers : 
    // Case:1  constant pointing integer
    int j = 20;
    int const *p = &j;
    // const int *p == int const *p;	// pointer to const int
    cout<< "j = " << ++j << endl;
    // (*p)++;  //Value change for constant is not possible

    // Case:2  constant pointer
    int k = 10;
    int * const pk = &k;

    cout << " " << endl;
    cout<< "k = " << ++k << endl;
    cout<< "k = " << (*pk)++ << endl;
    // value change is possible
    // *pk++; we cant change the address of the pointer



    

}