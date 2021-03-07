#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
        int len = s.size();
        unordered_set<char> chset;
        for (int i = 0; i < s.size(); ++i) {
            if (chset.find(s[i]) == chset.end()) {
                chset.insert(s[i]);
            }
        }
        cout << chset.size() << endl;
    }
    return 0;
}