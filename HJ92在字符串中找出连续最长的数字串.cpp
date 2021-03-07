#include <iostream>
#include <vector>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
        string temp;
        int cnt = 0, maxValue = 0;
        vector<pair<string, int>> vec;
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                temp.push_back(s[i]);
                cnt++;
            } else if (!temp.empty()){
                vec.push_back(make_pair(temp, cnt));
                maxValue = max(cnt, maxValue);
                cnt = 0;
                temp.clear();
            }
        }
        if (!temp.empty()) {
            vec.push_back(make_pair(temp, cnt));
            maxValue = max(cnt, maxValue);
            temp.clear();
        }
        for (auto i : vec) {
            if (i.second == maxValue) {
                cout << i.first;
            }
        }
        cout << ',' << maxValue << endl;
    }
    return 0;
}