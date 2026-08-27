#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m, 0);
    for (int& e : a) {
        cin >> e;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            b[j] += x;
        }
    }
    bool yes = true;
    for (int i = 0; i < m; i++) {
        if (b[i] < a[i]) {
            yes = false;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
