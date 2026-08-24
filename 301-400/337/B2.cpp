#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool yes = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] > s[i]) {
            yes = false;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
