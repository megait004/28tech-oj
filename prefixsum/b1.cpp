#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> arr(n), F(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    F[0] = arr[0];
    cout << F[0] << " ";

    for (int i = 1; i < n; i++) {
        F[i] = F[i - 1] + arr[i];
        cout << F[i] << " ";
    }

    return 0;
}
