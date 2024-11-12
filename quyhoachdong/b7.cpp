#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 5;
long long A[maxn], dp[maxn];

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    dp[1] = 0; // Chi phí ban đầu là 0.
    dp[2] = abs(A[2] - A[1]); // Chi phí từ nhóm 1 đến nhóm 2.

    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + abs(A[i] - A[i - 1]), dp[i - 2] + abs(A[i] - A[i - 2]));
    }

    cout << dp[N] << endl; // Kết quả là chi phí tối thiểu để đến nhóm N.

    return 0;
}
