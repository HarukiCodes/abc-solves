#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    const int N = min(s.size(), t.size());
    int ans = s.size() == t.size() ? 0 : N + 1;
    for (int i = 0; i < N; i++) {
        if (s[i] != t[i]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
