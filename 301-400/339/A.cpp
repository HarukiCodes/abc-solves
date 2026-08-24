#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    const int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '.') {
            cout << s.substr(i + 1) << endl;
            break;
        }
    }
    return 0;
}
