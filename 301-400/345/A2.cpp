#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.front() == '<' && count(s.begin(), s.end(), '=') == s.size() - 2 &&
        s.back() == '>') {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
    return 0;
}
