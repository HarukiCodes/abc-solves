#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using Bool = int;
int main() {
    int n, q;
    cin >> n >> q;
    vector<Bool> t(n, true);
    while (q--) {
        int i;  // 1-indexed
        cin >> i;
        t[i - 1] = !t[i - 1];
    }
    cout << ranges::count(t, true) << endl;
    return 0;
}
