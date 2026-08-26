#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    const int NUM_ALPHABET = 'z' - 'a' + 1;
    int counts[NUM_ALPHABET]{};
    for (char c : s) {
        counts[c - 'a']++;
    }
    // counts[i]回現れる文字の種類数を数える
    vector<int> kinds(s.size() + 1, 0);
    for (int i = 0; i < NUM_ALPHABET; i++) {
        if (counts[i] == 0) {
            continue;
        }
        kinds[counts[i]]++;
    }
    // 種類数が0 or 2でなければfalse
    bool yes = ranges::all_of(
        kinds, [](const auto& elem) { return elem == 0 || elem == 2; });
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
