#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (s == "Takahashi") {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
