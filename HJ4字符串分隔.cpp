#include <iostream>
using namespace std;

int main () {
    string str;
    while (getline(cin,str)) {
        int idx = 0;
        int len = str.size();
        while (idx < len) {
            for (int i = 0; i < 8; ++i) {
                if (i < str.size()) {
                    cout << str[i];
                    idx++;
                } else {
                    cout << '0';
                }
            }
            cout << endl;
            if (idx < len) {
                str = str.substr(8);
            }
        }
    }
    return 0;
}