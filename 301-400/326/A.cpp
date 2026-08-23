#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int difference = y - x;
    // -3 <= differnce <= 2であればよい
    if (difference >= -3 && difference <= 2) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
