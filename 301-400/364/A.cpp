#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> dishes(n);
    for (auto& e : dishes) {
        cin >> e;
    }
    int eat_count = 1;
    for (int i = 1; i < n; i++) {
        eat_count++;
        if (dishes[i - 1] == "sweet" && dishes[i] == "sweet") {
            break;
        }
    }
    cout << (eat_count == n ? "Yes\n" : "No\n");
    return 0;
}
