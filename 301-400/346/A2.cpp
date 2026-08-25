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
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] * a[i + 1] << " \n"[i == n - 2];
    }
    return 0;
}
