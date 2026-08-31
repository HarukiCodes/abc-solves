#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s, t = "nas";
    cin >> s;
    reverse(s.begin(), s.end());
    bool yes = true;
    for (int i = 0; i < 3; i++) {
        if (s[i] != t[i]) {
            yes = false;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
