#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    const int SWAP_COUNT = (r - l + 1) / 2;
    for (int i = 0; i < SWAP_COUNT; i++) {
        swap(a[l - 1 + i], a[r - 1 - i]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " \n"[i == n - 1];
    }
    return 0;
}
