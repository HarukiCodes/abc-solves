#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> ans;
    const int N = s.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N - i; j++) {
            string sub = s.substr(i, j);
            if (sub.empty()) {
                continue;
            }
            ans.insert(sub);
        }
    }
    cout << ans.size() << "\n";
    return 0;
}
