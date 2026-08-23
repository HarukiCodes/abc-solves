#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i < 1000; i++) {
        int i100 = i / 100;
        int i10 = (i % 100) / 10;
        int i1 = i % 10;
        if (i100 * i10 == i1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
