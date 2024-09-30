#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // In phần tử của mảng A và chèn B tại vị trí P
    for (int i = 0; i < n; i++) {
        if (i == p) {
            // In tất cả các phần tử của mảng B
            for (int j = 0; j < m; j++) {
                cout << b[j] << " ";
            }
        }
        // In phần tử của mảng A
        cout << a[i] << " ";
    }

    // Nếu p == n, chèn mảng B vào cuối mảng A
    if (p == n) {
        for (int j = 0; j < m; j++) {
            cout << b[j] << " ";
        }
    }

    return 0;
}
