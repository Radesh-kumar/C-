#include<iostream>
using namespace std;

int main() {
    // Static Allocation is performed inside stack
    // Stack is faster and have less memory
    // Non used memory will be deleted automatically
    // after the completion of the scope
    // Array space must be allocated at the compile time
    // cin >> i
    // int a[i];  ===> is not possible

    // While Dynamic Allocation is performed inside Heap
    // Heap is lil bit slower and have large memory
    // We have to manually delete the heap memory
    // after the completion of usage or else it will cause huge memory leaks
    // Dynamic Array allocation is possible with the help of pointers (compile time or Run time)

    // Static Arrays
    int a [2][2] = {1,2,1,4};
    cout << a[1][1] << endl;

    // We cant directly create 2-d arrays in heap like above method

    // 2-D Arrays
    int m, n;
    cout << "Enter rows and columns : " << endl;
    cin >> m >> n;

    // Note: We are using only one pointer(double)
    int **p = new int *[m];

    for (int i = 0; i < m; i++) {
        p[i] = new int[n];
        for (int j = 0; j < n ;j++)
            cin >> p[i][j];

    }
    cout << p[m-1][n-1] << endl;
    // Manually Deleting Array
    for (int i = 0; i < m; i++){
        delete [] p[i];
    }
    delete [] p;

}