#include <cmath>
#include <iostream>
using namespace std;

long long power(long long x, long long y) {
    long long result = 1;
    while (y--) {
        result *= x;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    int max_x = ceil(log2(n));
    int max_y = ceil(log(n) / log(3));

    bool yes = false;
    for (int x = 0; x <= max_x; x++) {
        for (int y = 0; y <= max_y; y++) {
            if (power(2, x) * power(3, y) == n) {
                yes = true;
            }
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
