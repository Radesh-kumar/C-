#include<iostream>
using namespace std;

// Induction Hypothesis
// Step:1 prove f(0) or f(1) is true
// Assume f(k) is true
// Prove that f(k+1 is true) 

int sum_of_n(int n){
if (n==0){
    return 0;
}
return n + sum_of_n(n-1);

}
int main() {
    cout << sum_of_n(10) << endl;
}