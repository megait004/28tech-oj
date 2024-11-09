#include <iostream>   
#include <map>        
using namespace std;

int main() {
    int n; 
    cin >> n;            
    int arr[n];          
    map<int, int> mp;    // Tạo một map để lưu số lần xuất hiện của mỗi phần tử

    // Đếm số lần xuất hiện của từng phần tử
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
        mp[arr[i]]++;    // Tăng số lần xuất hiện của phần tử trong map
    }

    int _max = -10000000; 
    int giatri;            // Khởi tạo biến để lưu giá trị của phần tử có số lần xuất hiện nhiều nhất

    // Duyệt qua từng phần tử trong map để tìm phần tử xuất hiện nhiều nhất
    for (auto i : mp) {
        if (i.second > _max) { // Nếu số lần xuất hiện của phần tử hiện tại lớn hơn _max
            _max = i.second;    // Cập nhật _max với số lần xuất hiện mới
            giatri = i.first;    // Cập nhật gia tri với tần suất của phần tử hiện tại
        }
    }

    cout << giatri << " " << _max; 
    return 0;
}
