#include <iostream>
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    bool append = true;
    for (char c : s) {
        if (c == '|') {
            append = !append;
            continue;
        }
        if (append) {
            ans += c;
        }
    }
    cout << ans << "\n";
    return 0;
}
