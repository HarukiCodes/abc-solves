#include <iostream>
using namespace std;

int main() {
    string s = "wbwbwwbwbwbw";
    const int N = s.size();
    int w, b;
    cin >> w >> b;
    bool yes = false;
    for (int start = 0; start < N; start++) {
        int w_count = 0, b_count = 0;
        for (int i = 0; i < w + b; i++) {
            int index = (start + i) % N;
            if (s[index] == 'w') {
                w_count++;
            } else {
                b_count++;
            }
        }
        if (w_count == w && b_count == b) {
            yes = true;
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
