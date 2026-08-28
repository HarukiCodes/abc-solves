#include <iostream>
using namespace std;

// 共通部分の長さが共通直方体の一辺の長さになる

bool overlap(int l1, int r1, int l2, int r2) {
    return max(l1, l2) < min(r1, r2);
}

int main() {
    const int N = 4;
    int x[N], y[N], z[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
    int count = overlap(x[0], x[1], x[2], x[3]);
    count += overlap(y[0], y[1], y[2], y[3]);
    count += overlap(z[0], z[1], z[2], z[3]);
    cout << (count == 3 ? "Yes\n" : "No\n");
    return 0;
}
