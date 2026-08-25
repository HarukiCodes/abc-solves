// C 解答例
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    // input
    vector<long long> n(3);
    vector<vector<long long>> a(3);
    for (long long i = 0; i < 3; i++)
    {
        cin >> n[i];
        a[i] = vector<long long>(n[i]);
        for (long long j = 0; j < n[i]; j++)
            cin >> a[i][j];
    }

    unordered_set<long long> S;
    for (long long i = 0; i < n[0]; i++)
    {
        for (long long j = 0; j < n[1]; j++)
        {
            for (long long k = 0; k < n[2]; k++)
            {
                long long s = a[0][i] + a[1][j] + a[2][k];
                S.insert(s);
            }
        }
    }

    long long q = 0;
    cin >> q;
    for (long long i = 0; i < q; i++)
    {
        long long x;
        cin >> x;
        /*if (S.count(x))cout << "Yes" << endl;*/
        if (S.find(x) != S.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}