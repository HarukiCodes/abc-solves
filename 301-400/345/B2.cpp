#include <iostream>
using namespace std;

template <typename T>
T ceil(T x, T m) {
    if (x >= 0) {
        return (x + m - 1) / m;
    }
    return x / m;
}

int main() {
    long long x;
    cin >> x;
    cout << ceil(x, 10LL) << '\n';
    return 0;
}
