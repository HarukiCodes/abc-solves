#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool yes = false;
    for (int w = 1; w < s.size(); w++) {
        for (int c = 0; c < w; c++) {
            string u;
            for (int i = 0; i < s.size(); i += w) {
                if (i + c < s.size()) {
                    u += s[i + c];
                }
            }
            if (u == t) {
                yes = true;
            }
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
