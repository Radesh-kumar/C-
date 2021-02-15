#include<iostream>
using namespace std;

// Induction Hypothesis
// Step:1 prove f(0) or f(1) is true
// Assume f(k) is true
// Prove that f(k+1 is true) 

string removeX(char *arr, string res = "" ) {
if (arr[0] == '\0'){
    return res;
}
if (arr[0] != 'x'){
    res+=arr[0];
    return removeX(arr + 1,res);
}
if (arr[0] == 'x'){
    return removeX(arr + 1,res);
}
}
int main() {
    char arr []="axbxjxkd";
    // cout << "Enter a string :" << endl;
    // cin >> arr;
    cout << removeX(arr) << endl;
}