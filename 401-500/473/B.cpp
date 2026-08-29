#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counts[101]{};
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        counts[e]++;
    }
    int ans = 0;
    for (int i = 1; i < 101; i++) {
        if (counts[i] % 2 == 1) {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
