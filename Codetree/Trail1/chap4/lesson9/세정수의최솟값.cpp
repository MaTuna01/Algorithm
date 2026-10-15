#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int min;
    if (a > b) {
        min = b;
    } else {
        min = a;
    }
    if (min > c) {
        min = c;
    }
    cout << min;

    return 0;
}