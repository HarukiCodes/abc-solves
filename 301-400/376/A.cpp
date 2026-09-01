#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int ans = 0, pt;
    cin >> pt;
    n--;
    while (n--) {
        int t;
        cin >> t;
        if (t - pt >= c) {
            ans++;
            pt = t;
        }
    }
    cout << ans << "\n";
    return 0;
}
