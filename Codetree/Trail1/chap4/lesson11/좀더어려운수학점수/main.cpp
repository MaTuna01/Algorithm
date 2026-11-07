#include <iostream>
using namespace std;

int main () {
    int a[2];
    int b[2];
    
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];

    if (a[0] > b[0]) {
        cout << "A";
    } else if (a[0] == b[0]) {
        if (a[1] > b[1]) {
            cout << "A";
        } else {
            cout << "B";
        }
    } else {
        cout << "B";
    }
    return 0;
}