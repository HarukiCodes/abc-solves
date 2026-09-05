#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int n = 8;
    const int dir_count = 4;
    const int dx[dir_count] = {1, 0, -1, 0};
    const int dy[dir_count] = {0, 1, 0, -1};

    vector<string> s(n);
    for (auto& e : s) {
        cin >> e;
    }
    int ans = 0;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            // コマが置かれているならスキップ
            if (s[y][x] == '#') {
                continue;
            }

            // 上下左右にコマがあるかチェック
            bool can_put = true;
            for (int i = 0; i < dir_count; i++) {
                int cx = x + dx[i];
                int cy = y + dy[i];
                while (cx >= 0 && cx < n && cy >= 0 && cy < n) {
                    if (s[cy][cx] == '#') {
                        can_put = false;
                        break;
                    }
                    cx += dx[i];
                    cy += dy[i];
                }
            }
            if (can_put) {
                ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
