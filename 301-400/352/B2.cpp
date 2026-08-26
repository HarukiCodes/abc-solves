#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int index = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[index]) {
            cout << i + 1 << " \n"[index == s.size() - 1];
            index++;
        }
    }
    return 0;
}
