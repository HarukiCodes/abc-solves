#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    // 各卵の最大個数を計算(ceil)
    const int MAX6 = (n + 6 - 1) / 6;
    const int MAX8 = (n + 8 - 1) / 8;
    int ans = INT_MAX;
    for (int count6 = 0; count6 <= MAX6; count6++) {
        for (int count8 = 0; count8 <= MAX8; count8++) {
            int count12 = max(0, (n - count6 * 6 - count8 * 8 + 11) / 12);
            int price = s * count6 + m * count8 + l * count12;
            ans = min(ans, price);
        }
    }
    cout << ans << endl;
    return 0;
}
