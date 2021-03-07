#include <iostream>
#include <vector>
using namespace std;

bool check(string s) {
    if (s.size() > 3) {
        return false;
    }
    if (s[0] != 'A' && s[0] != 'W' && s[0] != 'S' && s[0] != 'D') {
        return false;
    }
    for (int i = 1; i < s.size(); ++i) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

int main () {
    string s;
    while (cin >> s) {
        int res[2] = {0, 0};
        string temp;
        vector<int> vec;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ';') {
                temp.push_back(s[i]);
            } else {
                if (check(temp)) {
                    int displacement = stoi(temp.substr(1).c_str());
                    if (temp[0] == 'A') {
                        res[0] = res[0] - displacement;
                    }
                    if (temp[0] == 'W') {
                        res[1] = res[1] + displacement;
                    }
                    if (temp[0] == 'S') {
                        res[1] = res[1] - displacement;
                    }
                    if (temp[0] == 'D') {
                        res[0] = res[0] + displacement;
                    }
                }
                temp.clear();
            }
        }
        cout << res[0] << ',' << res[1] << endl;
    }
    return 0;
}