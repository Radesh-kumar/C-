// C++ program to swap two numbers using 
// pass by value. 
// Original Values Doesn't change
  
#include <iostream> 
using namespace std; 
void swap(int x, int y) 
{ 
    int z = x; 
    x = y; 
    y = z; 
    cout << x << " " << y << " " << z << endl;
} 
  
int main() 
{ 
    int a = 45, b = 35; 
    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(a, b); 
  
    cout << "After Swap with pass by value\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 

}  // Pass by value == Call by value 