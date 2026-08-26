#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    vector<int> rates(n);
    int t = 0;
    for (int i = 0; i < n; i++) {
        cin >> names[i] >> rates[i];
        t += rates[i];
    }
    ranges::sort(names);
    cout << names[t % n] << endl;
    return 0;
}
