#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int getMinMoveSteps(int start, int goal, int obstacle, int n) {
    int steps[2]{};
    for (int i = start; i != goal; i = ((i + 1) % n + n) % n) {
        if (i == obstacle) {
            steps[0] = INT_MAX;
            break;
        }
        steps[0]++;
    }
    // 反対回り
    for (int i = start; i != goal; i = ((i - 1) % n + n) % n) {
        if (i == obstacle) {
            steps[1] = INT_MAX;
            break;
        }
        steps[1]++;
    }
    return min(steps[0], steps[1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int l = 0, r = 1;
    int ans = 0;
    while (q--) {
        char h;
        int t;
        cin >> h >> t;
        t--;
        if (h == 'L') {
            ans += getMinMoveSteps(l, t, r, n);
            l = t;
        } else {
            ans += getMinMoveSteps(r, t, l, n);
            r = t;
        }
    }
    cout << ans << "\n";
    return 0;
}
