#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& e : a) {
        cin >> e;
    }
    int max_value = 0, second_value = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max_value) {
            second_value = max_value;
            max_value = a[i];
        } else if (a[i] > second_value) {
            second_value = a[i];
        }
    }
    cout << ranges::find(a, second_value) - a.begin() + 1 << endl;
    return 0;
}
