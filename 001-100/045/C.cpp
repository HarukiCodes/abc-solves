#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long ans = 0;
    const int N = s.size();
    for (int i = 0; i < (1 << (N - 1)); i++) {

        // 最上位ビットを立てておくことで、最後の「+」以降の文字列を取得する
        int bitmask = i | (1 << (N - 1));
        int offset = 0;

        // 上で立てた最上位ビットを検知するためにループはN回行う
        for (int j = 0; j < N; j++) {
            if (bitmask & (1 << j)) {
                string sub = s.substr(offset, j + 1 - offset);
                ans += stoll(sub);
                offset = j + 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
