#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T square(T x) {
    return x * x;
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++) {
        int index = -1;
        int current_max = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            int dist_squared = square(x[i] - x[j]) + square(y[i] - y[j]);
            if (dist_squared > current_max) {
                current_max = dist_squared;
                index = j;
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}
