#include <iostream>
#include <vector>
using namespace std;

/*
前の人が終わる時間より早く着いたら、前の人が終わってから受付が始まる
-> t[i] = t[i-1] + a
前の人が終わる時間より遅く着いたら、自分が着いたときに受付が始まる
-> t[i] = t[i]
*/

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    for (int& e : t) {
        cin >> e;
    }
    for (int i = 1; i < n; i++) {
        t[i] = max(t[i], t[i - 1] + a);
    }
    for (int e : t) {
        cout << e + a << "\n";
    }
    return 0;
}
