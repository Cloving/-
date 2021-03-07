#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<string> vec;
    for (int i = 0; i < num; ++i) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    sort(vec.begin(), vec.end());
    for (auto it : vec) {
        cout << it << endl;
    }
    return 0;
}
