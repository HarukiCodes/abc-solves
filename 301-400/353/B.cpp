#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }
    int ans = 0;
    int index = 0;
    // 待機グループがいる限り誘導とスタートを繰り返す
    while (index < a.size()) {
        int seat = 0;

        // 可能な限り乗せる
        while (seat + a[index] <= k) {
            seat += a[index];
            index++;

            // 待機列のグループがいなくなったら終了
            if (index == a.size()) {
                break;
            }
        }

        // スタート
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
