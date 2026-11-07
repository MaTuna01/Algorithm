#include<iostream>
#include<string>
using namespace std;

int main () {
    int n;
    string num;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool flag = false;
        if (i % 3 == 0) {
            flag = true;
        } else {
            num = to_string(i);
            for (int j = 0; j < num.length(); j++) {
                if (num[j] == '3' || num[j] == '6' || num[j] == '9') {
                    flag = true;
                    break;
                }
            }
        }
        if (flag == true) {
            cout << 0 << " ";
        } else {
            cout << i << " ";
        }
    }
    return 0;
}