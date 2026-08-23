#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n), x(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> x[i];
    }
    long long ans = 0;
    for (int std_start_time = 0; std_start_time < 24; std_start_time++) {
        long long total_workers = 0;
        for (int i = 0; i < n; i++) {
            int local_start_time = (std_start_time + x[i]) % 24;
            if (local_start_time >= 9 && local_start_time < 18) {
                total_workers += w[i];
            }
        }
        ans = max(ans, total_workers);
    }
    cout << ans << endl;
    return 0;
}
