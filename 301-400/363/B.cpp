#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for (int& e : l) {
        cin >> e;
    }
    int ans = 0;
    while (true) {
        int t_count = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] >= t) {
                t_count++;
            }
            l[i]++;
        }
        if (t_count >= p) {
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
