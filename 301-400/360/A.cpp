#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int r = ranges::find(s, 'R') - s.begin();
    int m = ranges::find(s, 'M') - s.begin();
    cout << (r < m ? "Yes\n" : "No\n");
    return 0;
}
