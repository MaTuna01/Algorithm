#include <iostream>
#include <vector>
using namespace std;

int main () {
    int count = 0;
    string cold; int temp;
    for (int i = 0; i < 3; i++){
        cin >> cold >> temp;
        if (cold == "Y" && temp >= 37) {
            count ++;
        }
    }
    if (count >= 2) {
        cout << "E";
    } else {
        cout << "N";
    }

    return 0;
}