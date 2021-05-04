// C++ program to swap two numbers using 
// pass by reference. 
  
#include <iostream> 
using namespace std; 
void swap(int &x, int &y) 
{ 
    int z = x; 
    x = y; 
    y = z; 
    cout << x << " " << y << " " << z << endl;
} 
  
int main() 
{ 
    int a = 45, b = 35;
    // int *x = &a;
    // int *y = &b;
    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(a, b); 

    cout << "After Swap with pass by reference\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 

}  // Pass by reference == Call by reference 