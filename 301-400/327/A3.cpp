#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool yes = false;
    for (int i = 0; i < n - 1; i++) {
        string t = s.substr(i, 2);
        if (t == "ab" || t == "ba") {
            yes = true;
            break;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
