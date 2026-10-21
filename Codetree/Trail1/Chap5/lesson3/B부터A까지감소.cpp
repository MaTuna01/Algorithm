#include<iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    for (b; b >= a; b--) {
        cout << b << " ";
    }
    return 0;
}