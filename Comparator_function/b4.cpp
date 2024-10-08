#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Hàm so sánh để sắp xếp các điểm
bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
    // So sánh khoảng cách bình phương tới gốc tọa độ
    int d1 = p1.first * p1.first + p1.second * p1.second;
    int d2 = p2.first * p2.first + p2.second * p2.second;
    
    if (d1 != d2) {
        return d1 < d2;
    }
    // Nếu khoảng cách bằng nhau, so sánh theo hoành độ
    if (p1.first != p2.first) {
        return p1.first < p2.first;
    }
    // Nếu hoành độ cũng bằng nhau, so sánh theo tung độ
    return p1.second < p2.second;
}

int main() {
    int n;
    cin >> n;
    
    // Tạo vector để lưu các điểm
    vector<pair<int, int>> points(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    
    // Sắp xếp các điểm theo quy tắc
    sort(points.begin(), points.end(), cmp);
    
    // In ra kết quả sau khi sắp xếp
    for (const auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }
    
    return 0;
}
