#include <iostream>
#include <math.h>
using namespace std;

int main () {
    string s;
    while (cin >> s) {
        int res = 0, bit = 0;
        for (int i = s.size()-1; i>=0; --i) {
            if (s[i]>='A' && s[i] <= 'F') {
                res += (s[i] - 'A' + 10) * pow(16, bit++);
            }
            if (s[i] >= '0' && s[i] <= '9') {
                res += (s[i] - '0') * pow(16, bit++);
            }
        }
        cout << res << endl;
    }
    return 0;
}