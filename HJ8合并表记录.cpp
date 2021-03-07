#include <iostream>
#include <map>

using namespace std;
 int main () {
     map<int, int> m;
     int len;
     cin >> len;
     for (int i = 0; i < len; ++i) {
         pair<int, int> p;
         cin >> p.first;
         cin >> p.second;
         if (m.find(p.first) != m.end()) {
             m[p.first] += p.second;
         } else {
//              m[p.first] = p.second;
             m.insert(p);
         }
     }
     for (auto it = m.begin(); it != m.end(); ++it) {
         cout << it->first << ' ' << it->second << endl;
     }
     return 0;
 }