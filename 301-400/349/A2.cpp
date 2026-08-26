#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int& e : a) {
        cin >> e;
    }
    // 一回のゲームで持ち点の総和は変わらない
    // => 人1~N-1の持ち点 + 人Nの持ち点 = 0
    // => 人Nの持ち点 = - 人1~N-1の持ち点
    cout << -accumulate(a.begin(), a.end(), 0) << endl;
    return 0;
}
