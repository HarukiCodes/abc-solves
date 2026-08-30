#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;
    for (int i = x.size() - 1; i >= 0; i--) {
        if (x[i] != '0') {
            break;
        }
        x.pop_back();
    }
    if (x.back() == '.') {
        x.pop_back();
    }
    cout << x << "\n";
    return 0;
}
