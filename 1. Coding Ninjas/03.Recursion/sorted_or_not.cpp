#include<iostream>
#include <time.h>
using namespace std;

bool isSorted(int * p, int size){
if (size == 0 || size == 1){
    return true;
}
if(p[0] > p[1]){
    return false;
}
cout << "index :" << p <<" size: " << size << endl;
return isSorted(p + 1, size-1) ;
}

int main() {
    int arr1[5] = {11,12,13,14,15};
    int arr2[5] = {12,14,15,11,10};
    cout << isSorted(arr1,5) << "\n"<< endl;
    cout << isSorted(arr2,5) << endl;
}