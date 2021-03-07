#include <iostream>
#include <set>
using namespace std;

int main () {
    int num;
    set<int> set1;
    while (cin >> num) {
        for (int i = 0; i < num; ++i) {
            int temp;
            cin >> temp;
            set1.insert(temp);
        }
        for (auto i : set1) {
            cout << i << endl;
        }
        set1.clear();
    }
    return 0;
}