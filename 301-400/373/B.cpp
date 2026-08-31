#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int current = s.find('A');
    for (int i = 'B'; i <= 'Z'; i++) {
        int next = s.find(i);
        ans += abs(next - current);
        current = next;
    }
    cout << ans << "\n";
    return 0;
}
