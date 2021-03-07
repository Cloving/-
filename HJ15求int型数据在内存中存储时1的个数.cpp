#include <iostream>
using namespace std;
int main() {
    int a, mod, count = 0;
    cin >> a;
    while (a>0) {
        mod = a - (a/2)*2;
        a = a/2;
        count += mod;
    }
    cout << count;
    return 0;
}

