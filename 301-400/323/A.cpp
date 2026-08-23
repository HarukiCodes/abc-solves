#include <iostream>
#include <ranges>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool yes = true;
    for (int i : views::iota(1, 16) | views::stride(2)) {
        if (s[i] != '0') {
            yes = false;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}