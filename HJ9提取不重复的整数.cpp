#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string num; 
    while (cin >> num) {
        unordered_set<char> m;
        for (auto it = num.rbegin(); it != num.rend(); ++it) {
            if (m.find(*it) == m.end()) {
                m.insert(*it);
                cout << *it ;
            }
        }
        cout << endl;
    }
    return 0;
}