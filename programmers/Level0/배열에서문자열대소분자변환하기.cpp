#include <string>
#include <cctype>
#include <vector>

using namespace std;

// cctype 사용
vector<string> solution(vector<string> strArr) {

    for (int i = 0; i < strArr.size(); i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < strArr[i].size(); j++) {
                strArr[i][j] = tolower(strArr[i][j]);
            }
        }
        else {
            for (int j = 0; j < strArr[i].size(); j++) {
                strArr[i][j] = toupper(strArr[i][j]);
            }
        }

    }
    return strArr;
}

// 아스키코드 활용
string solution(string my_string, int n) {
    for (int i = 0; i < strArr.size(); i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < strArr[i].size(); j++) {
                if (strArr[i][j] >= 'A' && strArr[i][j] <= 'Z') {
                    strArr[i][j] += 32;
                }
            }
        }
        else {
            for (int j = 0; j < strArr[i].size(); j++) {
                if (strArr[i][j] >= 'a' && strArr[i][j] <= 'z') {
                    strArr[i][j] -= 32;
                }
            }
        }

    }
    return strArr;
}