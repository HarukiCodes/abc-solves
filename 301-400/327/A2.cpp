#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << (s.contains("ab") || s.contains("ba") ? "Yes\n" : "No\n");
    return 0;
}
