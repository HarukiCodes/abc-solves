#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool yes = isupper(s.front());
    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i])) {
            yes = false;
            break;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
