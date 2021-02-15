#include<iostream>
#include <time.h>
using namespace std;

int lastIndex(int * p, int size, int numb, int currIndx = 0, int indxCount = 0){
// Note we can also do something like
// CurrInx = 5 - size  (Optional)
if (size == 0 ){
    return -1;
}
if (size == 1){
    // If last element is numb
    if (p[0] == numb){
        ++indxCount;
        return indxCount;
    }
    // If last element is not numb
    return indxCount;
}
if(p[0] == numb){
    ++indxCount;
}
cout << "index :" << p <<" size: " << size << " CurrIndx : " << currIndx  << endl;
return lastIndex(p + 1, size-1, numb, ++currIndx, indxCount) ;
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