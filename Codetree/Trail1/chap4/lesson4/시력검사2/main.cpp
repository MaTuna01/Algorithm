#include <iostream>
using namespace std;

int main() {
    double mean;
    cin >> mean;
    if (mean >= 1.0) {
        cout << "High";
    } else if (mean >= 0.5) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    return 0;
}