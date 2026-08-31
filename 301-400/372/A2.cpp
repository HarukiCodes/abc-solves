#include <iostream>
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    for (char c : s) {
        if (c != '.') {
            ans += c;
        }
    }
    cout << ans << "\n";
    return 0;
}
