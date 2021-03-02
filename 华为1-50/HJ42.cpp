#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {
    long int num;
    vector<string> a = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> b = {"ten", "twenty", "thirty", "forty", "fifity", "sixty", "seventy", "eighty", "ninety"};
    while (cin >> num ) {
        int bit;
        int cnt = 0;
        string res;
        while (num > 0) {
            bit = num % 10;
            cnt++;
            if (cnt == 1) {
                res.insert(0, a[bit]);
            }
            if (cnt == 2) {
                res.insert(0, a[bit-1]);
            }
            if (cnt == 3) {
                res.insert(0, a[bit] + "hundred");
            }
            if (cnt == 4) {
                
            }
            num /= 10;
        }
    }
}