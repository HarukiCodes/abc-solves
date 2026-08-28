#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int P = 2 * n;
    vector<int> a(P);
    for (int& e : a) {
        cin >> e;
    }
    int ans = 0;
    for (int i = 1; i < P - 1; i++) {
        if (a[i - 1] == a[i + 1]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
