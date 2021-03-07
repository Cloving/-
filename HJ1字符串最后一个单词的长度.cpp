#include <iostream>
using namespace std;

// 第一种: 
int main() {
    string str;
    while (getline(cin, str)) {
        int index = str.find_last_of(' ');
        cout << str.substr(index+1).size() << endl;
    }
    return 0;
}

// 第二种: 
int main() {
    string str;
    while(getline(cin, str)) {
        int right = str.size() - 1;
        for (int left = right; left >= 0; left--) {
            if (str[left] == ' ') {
                cout << right - left << endl;
                break;
            }
            if (left == 0) {
                cout << right - left + 1 << endl;
                break;
            }
        }
    }
    return 0;
}