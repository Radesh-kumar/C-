// C++ program to swap two numbers using 
// pass by pointers. 

// Pointers vs Reference Recap
// https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/
  
#include <iostream> 
using namespace std; 
void swap(int *x, int *y) 
{ 
    int z = *x; 
    *x = *y; 
    *y = z; 
    cout << x << " " << y << " " << z << endl;
} 
  
int main() 
{ 
    int a = 45, b = 35;
    // int *x = &a;
    // int *y = &b;
    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(&a, &b); 

    cout << "After Swap with pass by pointers\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 

}  // Pass by pointers == Call by pointers 