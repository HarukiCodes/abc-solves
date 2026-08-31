#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> has_male(n, false);
    for (int i = 0; i < m; i++) {
        int a;
        char b;
        cin >> a >> b;
        if (b == 'M' && !has_male[a - 1]) {
            cout << "Yes\n";
            has_male[a - 1] = true;
            continue;
        }
        cout << "No\n";
    }
    return 0;
}
