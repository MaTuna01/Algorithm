#include<iostream>
using namespace std;

int main () {
    int a, n;
    cin >> a >> n;
    int i = 0;
    while(i < n) {
        a += n;
        cout << a << endl;
        i ++;
    }
    return 0;
}