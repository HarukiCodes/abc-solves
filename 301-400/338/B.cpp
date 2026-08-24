#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int counts[26]{};
    for (char c : s) {
        counts[c - 'a']++;
    }
    int max_value = *ranges::max_element(counts);
    char ans;
    for (int i = 0; i < 26; i++) {
        if (counts[i] == max_value) {
            ans = char('a' + i);
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
