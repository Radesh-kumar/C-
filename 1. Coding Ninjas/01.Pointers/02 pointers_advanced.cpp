#include<iostream>
using namespace std;

int main() {
    // Note: *p++ != (*p)++
    // *p++ ==  *(p + 1);
    // (*p)++ == *p =*p + 1
    int i = 10;
    int *p1 = &i;
    int *p2 = &i;

    // *p++ Increments the index of the array/pointer
    // stores next address in present address
    // Before
    cout << " " << endl;
    cout << "Before Value: "<< *p1 << endl;
    cout << "Before Address: "<< p1 << endl;
    // After
    // *p++ ==> p = p + 1
    *p1++;
    cout <<"After Value: "<< *p1 << endl;
    cout << "After Address: "<< p1 << endl;

    // (*p)++ Increment the value inside array
    // Before
    cout << " " << endl;
    cout <<"Before Value: "<< *p2 << endl;
    cout << "Before Address: "<< p2 << endl;
    // After
    // (*p)++ ==> *p = *p + 1
    (*p2)++;
    cout <<"After Value: "<< *p2 << endl;
    cout << "After Address: "<< p2<< endl;

    int arr[3] = {1,2,3};
    int *ap = arr;
    cout << " " << endl;
    cout << "Before Value: "<< *ap << endl;
    cout << "Before Address: "<< ap << endl;
    // *ap++
    ap = ap + 1; 
    cout <<"After Value: "<< *ap << endl;
    cout << "After Address: "<< ap<< endl;

    int arr2[3] = {1,2,3};
    int *ap2 = arr2;
    cout << " " << endl;
    cout << "Before Value: "<< *ap2 << endl;
    cout << "Before Address: "<< ap2 << endl;
    // (*ap2)++
    *ap2 = *ap2 + 1; 
    cout <<"After Value: "<< *ap2 << endl;
    cout << "After Address: "<< ap2<< endl;
}
