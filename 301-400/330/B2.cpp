#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long l, r;
    cin >> n >> l >> r;  // l<=r
    vector<long long> a(n);
    for (auto& e : a) {
        cin >> e;
    }
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        x[i] = clamp(a[i], l, r);
    }
    for (auto& e : x) {
        cout << e << " \n"[&e == &x.back()];
    }
    return 0;
}
