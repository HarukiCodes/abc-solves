#include <iostream>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k;
    while (n--) {
        cin >> a;
        if (a % k == 0) {
            cout << a / k << " ";
        }
    }
    cout << endl;
    return 0;
}
