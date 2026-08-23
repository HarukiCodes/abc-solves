#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int CHAR_N = n + '0';
    string ans;
    while (n--) {
        ans += CHAR_N;
    }
    cout << ans << endl;
    return 0;
}
