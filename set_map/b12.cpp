#include <bits/stdc++.h>  // Bao gồm tất cả các thư viện chuẩn của C++

using namespace std;

int main(){
 
    int n, m, x;              // Khai báo các biến nguyên để lưu số lượng và giá trị phần tử
    cin >> n >> m;            // Đọc số lượng phần tử của mảng A (n) và mảng B (m)

    set<int> se1;              // Khởi tạo một set để lưu trữ các phần tử của mảng A (loại bỏ trùng lặp và tự sắp xếp)
    unordered_set<int> se2;    // Khởi tạo một unordered_set để lưu trữ các phần tử của mảng B (tra cứu nhanh, không sắp xếp)

    // Vòng lặp để đọc các phần tử của mảng A và chèn vào set se1
    for (int i = 0; i < n; i++){
        cin >> x;              // Đọc phần tử thứ i của mảng A
        se1.insert(x);         // Chèn phần tử vào set se1 (set tự động loại bỏ các phần tử trùng lặp)
    }

    // Vòng lặp để đọc các phần tử của mảng B và chèn vào unordered_set se2
    for (int i = 0; i < m; i++){
        cin >> x;              // Đọc phần tử thứ i của mảng B
        se2.insert(x);         // Chèn phần tử vào unordered_set se2 (loại bỏ trùng lặp)
    }

    // Duyệt qua từng phần tử trong se2 (mảng B)
    for (int a : se2){
        if (se1.count(a)){     // Kiểm tra nếu phần tử a cũng tồn tại trong se1 (mảng A)
            se1.erase(a);      // Nếu tồn tại trong cả A và B, xóa nó khỏi se1 để loại bỏ khỏi kết quả
        }
        else {
            se1.insert(a);     // Nếu chỉ tồn tại trong B, thêm nó vào se1
        }
    }

    // In ra các phần tử còn lại trong se1, đây là các phần tử chỉ xuất hiện ở một trong hai mảng A hoặc B
    for (int a : se1) {
        cout << a << " ";       // In từng phần tử theo thứ tự tăng dần (do set se1 tự sắp xếp)
    }

    return 0;                 
}
