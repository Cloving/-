#include <iostream>
using namespace std;
int main () {
    int a, val;
    string s;
    cin >> a;
    while (a > 0) {
        val = a % 10;
        a = a/10; 
        s+=to_string(val);
    }
    cout << s;
}