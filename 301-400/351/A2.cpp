#include <iostream>
using namespace std;

int main() {
    const int N = 9;
    int sum_a = 0, sum_b = 0;
    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a;
        sum_a += a;
    }
    for (int i = 0; i < N - 1; i++) {
        cin >> b;
        sum_b += b;
    }
    cout << sum_a - sum_b + 1 << endl;
    return 0;
}
