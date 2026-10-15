#include <iostream>
using namespace std;

int main () {
    int mid, final, money;
    money = 0;
    cin >> mid >> final;
    if (mid >= 90) {
        if (final >= 95) {
            money = 100000;
        } else if (final >= 90) {
            money = 50000;
        } else {
            money = 0;
        }
    }
    cout << money;
    return 0;
}