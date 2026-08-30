#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            int e;
            cin >> e;
            e--;
            a[i].push_back(e);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = (ans >= i ? a[ans][i] : a[i][ans]);
    }
    cout << ans + 1 << endl;
    return 0;
}
