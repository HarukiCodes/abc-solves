#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T distance(T px, T py, T nx, T ny) {
    T dx = nx - px;
    T dy = ny - py;
    return sqrt(dx * dx + dy * dy);
};

int main() {
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    double ans = 0;
    double px = 0, py = 0;
    for (int i = 0; i < n; i++) {
        ans += distance(px, py, x[i], y[i]);
        px = x[i];
        py = y[i];
    }
    ans += distance<double>(px, py, 0, 0);
    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}
