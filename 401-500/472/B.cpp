#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> l(n), sum(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sum[0] = l[0];
    for (int i = 0; i < n - 1; i++) {
        sum[i + 1] = sum[i] + l[i + 1];
    }
    long long ans = sum[n - 1];
    for (int i = 0; i < n - 1; i++) {
        // sum[i]-(sum[n-1]-sum[i])
        ans = min(ans, abs(sum[i] * 2LL - sum[n - 1]));
    }
    cout << ans << endl;
    return 0;
}
