#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    // 空文字列はYes
    if (S.empty()) {
        cout << "Yes" << endl;
        return 0;
    }

    string T = "ABC";
    int cnt = 0;
    for (int i = 0; i < (int)S.size(); i++) {
        for (int k = cnt; k < (int)T.size(); k++) {
            if (S[i] == T[k])
                break;
            else
                cnt++;
        }
        if (cnt == 3) {
            cout << "No" << endl;
            return 0;
        }
    }
    std::cout << "Yes" << endl;
    return 0;
}