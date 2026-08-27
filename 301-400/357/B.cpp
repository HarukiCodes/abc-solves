#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper_count = 0, lower_count = 0;
    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (char &c : s) {
            if (islower(c)) {
                c = toupper(c);
            }
        }
    } else {
        for (char &c : s) {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
    }
    cout << s << "\n";
    return 0;
}
