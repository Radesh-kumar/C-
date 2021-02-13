#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a ;
    double b;
    string c;
    
    cin >> a;
    cin >> b;

    // This
    cin.ignore();
    getline(cin, c);

    // or this
    //getline(cin >> ws, c);
    
    cout << i + a << endl;
    printf("%.2f \n", d + b );
    cout << s + c << endl;
    return 0;
}