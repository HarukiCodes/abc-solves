#include <iostream>
using namespace std;

// 頂点が何個分離れているかに着目

const string VERTICES = "DEABCDEAB";
const int OFFSET = VERTICES.find('A');

int distance(char p1, char p2) {
    const int P1_POS = p1 - 'A' + OFFSET;
    int dist = 5;
    for (int i = -2; i <= 2; i++) {
        if (i == 0) {
            continue;  // p1と同じ頂点はスキップ
        }
        int p2_pos = P1_POS + i;
        if (p2 == VERTICES[p2_pos]) {
            dist = min(dist, abs(p2_pos - P1_POS));
        }
    }
    return dist;
}

int main() {
    string s, t;
    cin >> s >> t;
    int dist_s = distance(s[0], s[1]), dist_t = distance(t[0], t[1]);
    cout << (dist_s == dist_t ? "Yes\n" : "No\n");
    return 0;
}
