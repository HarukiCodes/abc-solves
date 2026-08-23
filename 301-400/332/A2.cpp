#include <iostream>
#include <vector>
using namespace std;

int main() {
    // max_p * max_q * max_n < INT_MAXより、long long は不要(maybe)
    int n, s, k;
    cin >> n >> s >> k;
    vector<int> p(n), q(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];
        total += p[i] * q[i];
    }
    int shipping = (total >= s ? 0 : k);
    cout << total + shipping << endl;
    return 0;
}
