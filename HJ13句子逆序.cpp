#include <iostream>
#include <vector>
using namespace std;

int main () {
    string str;
    while (getline(cin, str)) {
        int left = 0, right = str.size() - 1;
        for (int left = str.size() - 1; left >= 0; left--) {
//             未考虑存在连续多个空格的情况
            if (str[left] == ' ') {
                cout << str.substr(left+1, right - left) << ' ';
                right = left - 1;
            }
        }
        cout << str.substr(left, right - left + 1);
    }
    return 0;
}


// int main () {
//     vector<string> str;
//     string s;
//     while (cin >> s) {
//         str.push_back(s);
//     }
//     for (auto it = str.rbegin(); it != str.rend(); it++) {
//         cout << *it << ' ';
//     }    
// }    