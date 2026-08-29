#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const string DIR = "LRUD";
const int DX[4]{-1, 1, 0, 0};
const int DY[4]{0, 0, -1, 1};

int main() {
    int h, w, sx, sy;
    cin >> h >> w >> sy >> sx;
    sx--, sy--;
    vector<string> grid(h);
    for (auto& s : grid) {
        cin >> s;
    }
    string x;
    cin >> x;
    for (char c : x) {
        int d = DIR.find(c);
        const int nx = clamp(sx + DX[d], 0, w - 1);
        const int ny = clamp(sy + DY[d], 0, h - 1);
        if (grid[ny][nx] == '.') {
            sx = nx, sy = ny;
        }
    }
    cout << sy + 1 << " " << sx + 1 << "\n";
    return 0;
}
