#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> s(n);
    for (auto& e : s) {
        cin >> e;
        m = max<size_t>(m, e.size());
    }
    for (int column = 0; column < m; column++) {
        int asterisk_count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (column < s[i].size()) {
                cout << string(asterisk_count, '*') + s[i][column];
                asterisk_count = 0;
            } else {
                asterisk_count++;
            }
        }
        cout << endl;
    }
    return 0;
}
