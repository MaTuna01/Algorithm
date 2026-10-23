#include<iostream>
using namespace std;

int main () {
    int classroom = 0; int corridor = 0; int restroom = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) {
            restroom++;
        } else if (i % 3 == 0) {
            corridor++;
        } else if (i % 2 == 0) {
            classroom++;
        }
    }

    cout << classroom << " " << corridor << " " << restroom;

    return 0;
}