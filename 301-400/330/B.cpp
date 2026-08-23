#include <iostream>
#include <vector>
using namespace std;

/*
/// 考えたこと ///
  A,L,Rの値が大きいので、全探索はできない
> L<=Y<=Rに対して、abs(X[i]-A[i])<=abs(Y-A[i])を数直線で考える
> 両方ともA[i]からの距離であるので、条件を満たすX[i]は、A[i]に近ければよい
> A[i]がLの左側(A[i]<L)のとき、X[i]の範囲で、A[i]に最も近いのは、L
> A[i]がLとRの間(L<=A[i]<=R)のとき、X[i]の範囲で、A[i]に最も近いのは、A[i]
> A[i]がRの右側(A[i]>=R)のとき、X[i]の範囲で、A[i]に最も近いのは、R
*/

int main() {
    int n;
    long long l, r;
    cin >> n >> l >> r;  // l<=r
    vector<long long> a(n);
    for (auto& e : a) {
        cin >> e;
    }
    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        if (a[i] < l) {
            x[i] = l;
        } else if (a[i] > r) {
            x[i] = r;
        } else {
            x[i] = a[i];
        }
    }
    for (auto& e : x) {
        cout << e << " \n"[&e == &x.back()];
    }
    return 0;
}
