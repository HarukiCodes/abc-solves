#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& e : a) {
        cin >> e;
    }
    for (int& e : b) {
        cin >> e;
    }
    ranges::sort(a);
    bool yes = false;
    for (int i = 0; i < n - 1; i++) {
        const int left = a[i], right = a[i + 1];
        // 間に入るbの要素がないと仮定
        bool exists = false;  
        for (int e : b) {
            if (e > left && e < right) {
                exists = true;
                break;
            }
        }
        // 間に入らないことがあればyes
        if (!exists) {
            yes = true;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
