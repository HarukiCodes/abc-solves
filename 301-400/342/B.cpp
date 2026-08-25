#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> p(n);
    for (auto& e : p) {
        cin >> e;
    }
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++) {
            if (p[i] == a) {
                cout << a << endl;
                break;
            }
            if (p[i] == b) {
                cout << b << endl;
                break;
            }
        }
    }
    return 0;
}
