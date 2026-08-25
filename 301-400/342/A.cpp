#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int counts[26]{};
    for (char ch : s) {
        counts[ch - 'a']++;
    }
    char unique;
    for (int i = 0; i < 26; i++) {
        if (counts[i] == 1) {
            unique = i + 'a';
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == unique) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
