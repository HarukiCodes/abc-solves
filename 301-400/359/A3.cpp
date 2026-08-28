#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto& str : s) {
        cin >> str;
    }
    cout << ranges::count(s, "Takahashi") << endl;
    return 0;
}
