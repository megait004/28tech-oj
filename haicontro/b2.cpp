#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    for (int &x : A) cin >> x;
    for (int &x : B) cin >> x;

    for (int x : B) {
        // Tìm chỉ mục của phần tử đầu tiên lớn hơn x
        int count = upper_bound(A.begin(), A.end(), x - 1) - A.begin();
        cout << count << " ";
    }

    return 0;
}
