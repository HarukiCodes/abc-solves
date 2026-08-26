#include <iostream>
using namespace std;

int main() {
    long long h, plant = 0;
    cin >> h;
    int day = 0;
    while (h >= plant) {
        plant += (1LL << day);
        day++;
    }
    cout << day << "\n";
    return 0;
}
