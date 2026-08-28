#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (i == k - 1) {
            cout << x << " ";
        }
    }
    cout << "\n";
    return 0;
}
