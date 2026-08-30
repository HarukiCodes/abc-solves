#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    string ans;
    if (b < c) {
        ans = (b < a && a < c) ? "No" : "Yes";
    } else {  // 日をまたいでるなら
        ans = (c < a && a < b) ? "Yes" : "No";
    }
    cout << ans << endl;
    return 0;
}
