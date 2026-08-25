#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    while (true) {
        int b;
        cin >> b;
        a.push_back(b);
        if (b == 0) {
            break;
        }
    }
    ranges::reverse(a);
    for (int e : a) {
        cout << e << endl;
    }
    return 0;
}
