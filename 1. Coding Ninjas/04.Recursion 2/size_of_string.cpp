#include<iostream>
using namespace std;

// Induction Hypothesis
// Step:1 prove f(0) or f(1) is true
// Assume f(k) is true
// Prove that f(k+1 is true) 

int size(char *arr) {
if (arr[0] == '\0'){
    return 0;
}
return 1 + size(arr+1);
}
int main() {
    char arr [100];
    cout << "Enter a string :" << endl;
    cin >> arr;
    cout << size(arr) << endl;
}