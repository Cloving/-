#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string s1;
    cin >> s1;
   for (int i = 0, j = s1.size()-1; i < j; ++i, --j) {
       char c = s1[i];
       s1[i] = s1[j];
       s1[j] = c;
   }
    cout << s1 << endl;
    return 0;
}


// int main () {
//     string s1;
//     while (cin >> s1) {
//         reverse(s1.begin(), s1.end());
//         cout << s1 << endl;
//     }
//     return 0;
// }