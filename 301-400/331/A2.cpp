#include <iostream>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;

    int ans_d = d + 1;
    int ans_m = m;
    int ans_y = y;
    // 月の最終日を超えたら
    if (ans_d > D) {
        ans_d = 1;
        ans_m++;
    }
    // 年の最終月を超えたら
    if (ans_m > M) {
        ans_m = 1;
        ans_y = y + 1;
    }
    cout << ans_y << " " << ans_m << " " << ans_d << endl;
    return 0;
}
