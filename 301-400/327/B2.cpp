#include <iostream>

using namespace std;

int main() {
    long long b;
    cin >> b;
    // 16^16 ~= 1.84467e+19 > b(=10^18)より、1<=A<=16の範囲で全探索
    for (int a = 1; a <= 16; a++) {
        long long aa = 1;
        for (int i = 0; i < a; i++) {
            aa *= a;
        }
        if (aa == b) {
            cout << a << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
