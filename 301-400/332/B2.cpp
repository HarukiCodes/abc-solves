#include <iostream>
using namespace std;

int main() {
    int k, g, m;  // g < m
    cin >> k >> g >> m;
    int current_g = 0, current_m = 0;
    while (k--) {
        if (current_g == g) {
            current_g = 0;
        } else if (current_m == 0) {
            current_m = m;
        } else {
            int move_amount = min(current_m, g - current_g);
            current_g += move_amount;
            current_m -= move_amount;
        }
    }
    cout << current_g << " " << current_m << endl;
    return 0;
}
