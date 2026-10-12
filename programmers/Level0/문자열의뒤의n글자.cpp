#include <iostream>
#include <vector>
#include <string>
using namespace std;

string solution(string my_string, int n) {
    return my_string.substr(my_string.size() - n);
}

int main () {
    string input;
    int n;

    cin >> input >> n;
    cout << solution(input, n);
    return 0;
}