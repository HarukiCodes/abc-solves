#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_value = 0;
    vector<int> a(n);
    for (int& i : a) {
        cin >> i;
        max_value = max(max_value, i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if ((a[i] > ans) && (a[i] < max_value)) {
            ans = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
