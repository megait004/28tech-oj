#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    set<char> se;

    // Nhập mảng và thêm vào set
    for (int i = 0; i < n; ++i) {
        cin >> c;
        se.insert(c);
    }

    // In ra số lượng ký tự khác nhau
    cout << se.size() << endl;

    // In ra ký tự lớn nhất, nhỏ nhất, lớn thứ nhì và nhỏ thứ nhì
    auto it = se.begin();
    char min1 = *it;          // Ký tự nhỏ nhất
    ++it;
    char min2 = *it;          // Ký tự nhỏ thứ nhì

    auto rit = se.rbegin();
    char max1 = *rit;         // Ký tự lớn nhất
    ++rit;
    char max2 = *rit;         // Ký tự lớn thứ nhì

    cout << max1 << " " << min1 << " " << max2 << " " << min2 << endl;

    return 0;
}
