#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long ans = 0;
    const int N = s.size();
    for (int i = 0; i < (1 << (N - 1)); i++) {
        int bitmask = i | (1 << (N - 1));
        long long num = 0;
        for (int j = 0; j < N; j++) {
            num *= 10;
            num += s[i] - '0';
            if (bitmask & (1 << j)) {
                ans += num;
                num = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
