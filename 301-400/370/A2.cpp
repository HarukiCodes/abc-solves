#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    if ((l ^ r) == 0) {
        cout << "Invalid\n";
        return 0;
    }
    cout << (l == 1 ? "Yes\n" : "No\n");
    return 0;
}
