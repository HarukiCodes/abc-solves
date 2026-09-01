#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int getMinMoveSteps(int start, int goal, int obstacle, int n) {
    if (start > goal) {
        swap(start, goal);
    }
    if (start < obstacle && obstacle < goal) {
        return n + start - goal;  // n - (goal - start)
    }
    return goal - start;
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
