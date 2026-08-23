#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    const int n = s.size();
    for (int i = 0; i < n; i++) {
        cout << s[i] << " \n"[i == n - 1];
    }
    return 0;
}
