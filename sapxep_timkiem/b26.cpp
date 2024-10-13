#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Hàm binary search để tìm kiếm giá trị 'x' trong vector 'v' từ vị trí 'l' đến 'r'
bool bs(vector<int> &v, int l , int r , int x){
    // Tiếp tục tìm kiếm cho đến khi vị trí bắt đầu (l) lớn hơn vị trí kết thúc (r)
    while(l <= r){
        int m = (l + r) / 2;  // Tìm chỉ số giữa của khoảng hiện tại
        if(v[m] == x) return true;  // Nếu tìm thấy phần tử bằng x, trả về true
        else if(v[m] > x) r = m - 1;  // Nếu phần tử giữa lớn hơn x, tìm về phía trái (giảm r)
        else l = m + 1;  // Nếu phần tử giữa nhỏ hơn x, tìm về phía phải (tăng l)
    }
    return false;  // Trả về false nếu không tìm thấy
}

int main(){
    int n, x;
    cin >> n >> x;  // Nhập số phần tử của mảng (n) và số X cần tìm hiệu

    vector<int> v(n);
    
    // Nhập các phần tử của mảng
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    // Sắp xếp mảng theo thứ tự tăng dần để dùng cho binary search
    sort(v.begin(), v.end());
    
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++){
        // Kiểm tra xem có tồn tại một phần tử A[j] sao cho A[i] - A[j] = X hay không
        // Tương đương với việc tìm A[j] = A[i] - X
        if(bs(v, 0, n - 1, v[i] - x)){
            cout << "1";  // Nếu tìm thấy cặp phần tử thỏa mãn, in ra 1
            return 0;  
        }
    }
    
    // Nếu duyệt hết mảng mà không tìm thấy cặp thỏa mãn, in ra -1
    cout << "-1";
    return 0;
}
