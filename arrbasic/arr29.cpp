#include<iostream>
#include<vector>
using namespace std;

int mark[1000001] = {0};  // Mảng đánh dấu tần suất xuất hiện của các giá trị

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    // Nhập các giá trị trong mảng
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Đếm tần suất xuất hiện của từng giá trị
    for(int i = 0; i < n; i++) {
        mark[v[i]]++;
    }

    int max_count = 0;  // Tần suất xuất hiện lớn nhất
    int min_value = 1000001;  // Giá trị nhỏ nhất với tần suất lớn nhất

    // Tìm giá trị có tần suất xuất hiện nhiều nhất, và nếu có nhiều giá trị, chọn giá trị nhỏ nhất
    for(int i = 0; i < n; i++) {
        if(mark[v[i]] > max_count) {
            max_count = mark[v[i]];
            min_value = v[i];  // Cập nhật giá trị khi tìm thấy tần suất lớn hơn
        } else if(mark[v[i]] == max_count && v[i] < min_value) {
            min_value = v[i];  // Cập nhật giá trị nhỏ hơn nếu tần suất bằng nhau
        }
    }

    // In ra kết quả
    cout << min_value << " " << max_count;
    return 0;
}
