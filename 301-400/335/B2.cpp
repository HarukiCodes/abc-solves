#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX_N = 21;
    for (int x = 0; x <= MAX_N; x++) {
        for (int y = 0; y <= MAX_N; y++) {
            for (int z = 0; z <= MAX_N; z++) {
                if (x + y + z <= n) {
                    cout << x << " " << y << " " << z << "\n";
                }
            }
        }
    }
    return 0;
}
