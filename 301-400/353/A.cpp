#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int& e : h) {
        cin >> e;
    }
    for (int i = 1; i < n; i++) {
        if (h[i] > h.front()) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
