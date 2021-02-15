#include<iostream>
#include <time.h>
using namespace std;

int firstIndex(int * p, int size, int numb, int currIndx = 0){
// Note we can also do something like
// CurrInx = 5 - size  (Optional)
if (size == 0 ){
    return -1;
}
if (size == 1 && p[0] == numb ){
    return currIndx;
}
if(p[0] == numb){
    return currIndx;
}
cout << "index :" << p <<" size: " << size << " CurrIndx : " << currIndx  << endl;
return firstIndex(p + 1, size-1, numb, ++currIndx) ;
}

int main() {
    
    int arr[5] = {3,1,2,3,5};
    // At 1
    cout << firstIndex(arr,5,3) << "\n"<< endl;
    // At last or 4
    cout << firstIndex(arr,5,5) << endl;
    // No element
    cout << firstIndex(arr,5,100) << endl;
}