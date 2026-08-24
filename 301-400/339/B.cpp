#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    constexpr int DX[4] = {0, 1, 0, -1};
    constexpr int DY[4] = {-1, 0, 1, 0};
    constexpr char WHITE = '.', BLACK = '#';

    int h, w, n;
    cin >> h >> w >> n;
    vector<string> grid(h, string(w, '.'));
    int cx = 0, cy = 0, dir = 0;
    auto travel = [&]() {
        cx = ((cx + DX[dir]) % w + w) % w;
        cy = ((cy + DY[dir]) % h + h) % h;
    };

    while (n--) {
        if (grid[cy][cx] == WHITE) {
            grid[cy][cx] = BLACK;
            dir = (dir + 1) % 4;
            travel();
        } else {
            grid[cy][cx] = WHITE;
            dir = ((dir - 1) % 4 + 4) % 4;
            travel();
        }
    }
    for (const string& s : grid) {
        cout << s << "\n";
    }
    return 0;
}
