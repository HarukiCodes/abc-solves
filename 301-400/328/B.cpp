#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    int ans = 0;
    for (int month = 1; month <= n; month++) {
        string m = to_string(month);
        for (int day = 1; day <= d[month - 1]; day++) {
            string md = m + to_string(day);
            for (int i = 0; i < 10; i++) {
                if (ranges::count(md, '0' + i) == md.size()) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
