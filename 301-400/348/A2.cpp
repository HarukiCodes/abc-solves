#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans;
    for (int i = 1; i <= n; i++) {
        ans += (i % 3 == 0 ? 'x' : 'o');
    }
    cout << ans << endl;
    return 0;
}
