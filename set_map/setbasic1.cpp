#include<iostream>    // Thư viện cho phép sử dụng các hàm nhập/xuất như cin và cout
#include<set>         // Thư viện cho phép sử dụng cấu trúc dữ liệu tập hợp (set)
using namespace std;  // Giúp sử dụng các đối tượng và hàm trong thư viện std mà không cần tiền tố "std::"

int main(){
    int n; 
    cin >> n;  // Nhập vào số lượng phần tử n từ người dùng
    set<int> se;  // Tạo một tập hợp (set) để lưu trữ các phần tử duy nhất

    // Vòng lặp để nhập n phần tử và đưa vào tập hợp
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;  // Nhập một phần tử
        se.insert(x);  // Thêm phần tử vào tập hợp, tự động loại bỏ các giá trị trùng lặp
    }

    // In ra kích thước của tập hợp (số lượng phần tử duy nhất)
    cout << se.size() << endl;

    // In ra các phần tử duy nhất, theo thứ tự đã sắp xếp
    for(int i : se){
        cout << i << " ";  
    }

    return 0;  
}
