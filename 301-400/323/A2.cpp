#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    const int EVEN_PART = 0b0101010101010101;  // 16文字
    string s;
    cin >> s;
    ranges::reverse(s);
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n |= ((s[i] - '0') << i);
    }
    cout << ((n & EVEN_PART) == 0 ? "Yes\n" : "No\n");
    return 0;
}
