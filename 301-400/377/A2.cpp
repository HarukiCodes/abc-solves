#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool has_a = false, has_b = false, has_c = false;
    for (char c : s) {
        switch (c) {
            case 'A': {
                has_a = true;
                break;
            }
            case 'B': {
                has_b = true;
                break;
            }
            case 'C': {
                has_c = true;
                break;
            }
        }
    }
    cout << (has_a && has_b && has_c ? "Yes\n" : "No\n");
    return 0;
}
