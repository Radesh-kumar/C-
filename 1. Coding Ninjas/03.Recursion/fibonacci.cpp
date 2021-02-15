#include<iostream>
#include <time.h>
using namespace std;

// Induction Hypothesis
// Step:1 prove f(0) or f(1) is true
// Assume f(k) is true
// Prove that f(k+1 is true) 

int fib(int n){
if (n == 0){
    return 0;
}

else if(n == 1){
    return 1;
}
return fib(n-1) + fib(n-2);

}
int main() {
    clock_t tStart = clock();
    cout << fib(43) << endl;
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}