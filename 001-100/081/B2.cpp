#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int howManyTimes(int x) {
    int result = 0;
    while (x % 2 == 0) {
        result++;
        x /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = INT_MAX;
    for (int& e : a) {
        cin >> e;
        ans = min(ans, howManyTimes(e));
    }
    cout << ans << endl;
    return 0;
}
