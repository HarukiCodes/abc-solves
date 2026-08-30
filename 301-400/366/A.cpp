#include <iostream>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int r = n - (t + a);
    cout << (abs(t - a) > r ? "Yes\n" : "No\n");
    return 0;
}
