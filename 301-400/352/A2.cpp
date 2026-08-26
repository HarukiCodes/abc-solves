#include <iostream>
using namespace std;

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    // zから見てx,yの片方は大きい、もう一方は小さい
    // つまり、それぞれからzを引いた値の積が負になる
    cout << ((x - z) * (y - z) < 0 ? "Yes\n" : "No\n");
    return 0;
}