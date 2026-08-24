#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int q;
    cin >> q;
    while (q--) {
        int type, xk;
        cin >> type >> xk;
        if (type == 1) {
            a.push_back(xk);
        } else {
            cout << a[a.size() - xk] << endl;
        }
    }
    return 0;
}
