#include <iostream>
using namespace std;

int main () {
    string str;
    while (cin >> str) {
        int cnt = 0;
        int flag[4] = {0};
        if (str.size() <= 8) {
            cout << "NG" << endl;
            continue;
        }
        for (int i = 0; i < str.size(); ++i) {
            if (islower(str[i]) && flag[0] == 0) {
                flag[0] = 1;
                cnt++;
            } else if (isupper(str[i]) && flag[1] == 0) {
                flag[1] = 1;
                cnt++;
            } else if (isdigit(str[i]) && flag[2] == 0) {
                flag[2] = 1;
                cnt++;
            } else if (!isalpha(str[i]) && !isdigit(str[i]) && flag[3] == 0){
                flag[3] = 1;
                cnt++;
            }
        }
        if (cnt < 3) {
            cout << "NG"<< endl;
            continue;
        }
        for (int i = 0; i < str.size(); ++i) {
            if (i <= str.size() - 3) {
                string temp = str.substr(i, 3);
                if (str.find(temp, i+3) != str.npos) {
                    cout << "NG" << endl;
                    break;
                }
            }
            if (i > str.size() - 3) {
                cout << "OK" << endl;
                break;
            } 
        }  
    }
    return 0;
}