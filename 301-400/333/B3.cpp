#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    const string NEXT_VERTICES = "ABCDEAEDCBA";
    bool yes = NEXT_VERTICES.contains(s) == NEXT_VERTICES.contains(t);
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
