#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Chuyển từ "dd/mm/yyyy" thành số nguyên
    int d1, m1, y1, d2, m2, y2;
    sscanf(s1.c_str(), "%d/%d/%d", &d1, &m1, &y1);
    sscanf(s2.c_str(), "%d/%d/%d", &d2, &m2, &y2);

    // So sánh năm -> tháng -> ngày
    if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)) {
        cout << "28tech"; // Tý sinh trước Tèo
    } else if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
        cout << "29tech"; // Tý sinh sau Tèo
    } else {
        cout << "30tech"; // Tý và Tèo sinh cùng ngày
    }

    return 0;
}
