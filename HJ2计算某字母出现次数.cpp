#include <iostream>
using namespace std;

int main () {
    string str;
    while (getline(cin, str)) {
        char c;
        cin.get(c).get();
        int res = 0;
        //     两个大小写字符比较的正确形式: if (char(c+32) == str[3])
        for (int i = 0; i < str.size(); ++i) {
            if (tolower(c) == tolower(str[i])){
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}