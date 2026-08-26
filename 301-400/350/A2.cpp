#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = stoi(s.substr(3, 3));
    bool yes = num >= 1 && num <= 349 && num != 316;
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
