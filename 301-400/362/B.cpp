#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

template <typename T>
T square(T x) {
    return x * x;
}

int distanceSquared(const Point& a, const Point& b) {
    return square(a.x - b.x) + square(a.y - b.y);
}

int main() {
    Point a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    int ab = distanceSquared(a, b);
    int bc = distanceSquared(b, c);
    int ca = distanceSquared(c, a);
    bool yes = ab + bc == ca || bc + ca == ab || ca + ab == bc;
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}
