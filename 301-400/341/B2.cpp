#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), s(n - 1), t(n - 1);
    for (long long& e : a) {
        cin >> e;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> s[i] >> t[i];
    }
    for (int i = 0; i < n - 1; i++) {
        long long exchange_count = a[i] / s[i];
        a[i] -= s[i] * exchange_count;
        a[i + 1] += t[i] * exchange_count;
    }
    cout << a[n - 1] << endl;
    return 0;
}
