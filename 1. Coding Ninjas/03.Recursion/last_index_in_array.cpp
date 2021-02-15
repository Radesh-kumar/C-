#include<iostream>
#include <time.h>
using namespace std;

int lastIndex(int * p, int size, int numb, int currIndx = 0, int elmIndx = -1){
// Note we can also do something like
// CurrInx = 5 - size  (Optional)
if (size == 0 ){
    return -1;
}
if (size == 1){
    // If last element is numb
    if (p[0] == numb){
        elmIndx = currIndx;
        return elmIndx;
    }
    // If last element is not numb
    return elmIndx;
}
if(p[0] == numb){
    elmIndx = currIndx;
}
cout << "index :" << p <<" size: " << size << " CurrIndx : " << currIndx  << endl;
return lastIndex(p + 1, size-1, numb, ++currIndx, elmIndx) ;
}

int main() {
    
    int arr[5] = {3,5,2,3,5};
    // At 1,3
    cout << lastIndex(arr,5,3) <<"\n"<< endl;
    // At 2,4
    cout << lastIndex(arr,5,5)<<"\n"<< endl;
    // No element
    cout << lastIndex(arr,5,100) << endl;
}