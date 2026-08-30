#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }
    for (int i = n - k; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n - k; i++) {
        cout << a[i] << " \n"[i == n - k - 1];
    }
    return 0;
}
