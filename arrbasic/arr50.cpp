#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    int count_even = 0, count_odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    // Tính số cặp chẵn và lẻ
    // Chọn ra 2 số khác nhau ,chọn cặp của nó là tổ hợp chập 2 của n
    long long result = 0;
    result += (long long)count_even * (count_even - 1) / 2;
    result += (long long)count_odd * (count_odd - 1) / 2;

    cout << result << endl;
    return 0;
}
