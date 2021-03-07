#include <iostream>
using namespace std;

int main () {
    long num;
    while (cin >> num) {
        long n = num;
        for (int i = 2; i * i <= n; ++i) {
            while (num % i == 0) {
                cout << i << ' ';
                num = num / i;
            }
        }
//         此时num是一个质数
        if (num > 1) {
            cout << num << ' ';
        }
    }
    return 0;
}