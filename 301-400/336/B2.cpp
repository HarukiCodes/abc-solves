#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        if (!(n & (1 << i))) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
