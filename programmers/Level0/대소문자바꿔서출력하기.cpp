#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z' ){
            str[i] = tolower(str[i]);
            continue;
        }
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;
    return 0;
}