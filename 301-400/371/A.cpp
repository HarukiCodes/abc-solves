#include <iostream>
using namespace std;

int main() {
    string ab, ac, bc;
    cin >> ab >> ac >> bc;
    if ((ab == ">" && ac == "<") || (ab == "<" && ac == ">")) {
        cout << "A\n";
    } else if ((ab == "<" && bc == "<") || (ab == ">" && bc == ">")) {
        cout << "B\n";
    } else {
        cout << "C\n";
    }
    return 0;
}
