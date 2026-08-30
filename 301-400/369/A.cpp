#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        // x = a = b
        cout << 1 << "\n";
    } else if ((a - b) % 2) {
        // a,x,b | b,x,a が存在しない
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    return 0;
}
