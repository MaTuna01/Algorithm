#include<iostream>
using namespace std;

int main () {
    int cnt = 0, num;
    for (int i = 0; i < 10; i ++) {
        cin >> num;
        if (num % 2 != 0) {
            cnt++;
        }
    }
    cout << cnt;
}