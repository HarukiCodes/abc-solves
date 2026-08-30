#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }
    int ans = 0;
    while (true) {
        ranges::sort(a, ranges::greater{});
        a[0]--, a[1]--;
        ans++;
        if (ranges::count_if(a, [](auto v) { return v > 0; }) <= 1) {
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
