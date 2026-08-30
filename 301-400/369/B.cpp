#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> s(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> s[i];
    }
    // 最初に弾く鍵盤に最初から置いておけばよい
    int ans = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            if (l != 0) {
                ans += abs(a[i] - l);
            }
            l = a[i];
        } else {
            if (r != 0) {
                ans += abs(a[i] - r);
            }
            r = a[i];
        }
    }
    cout << ans << "\n";
    return 0;
}
