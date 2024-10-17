#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Hàm ls thực hiện tìm kiếm nhị phân (binary search) để tìm vị trí lớn nhất mà giá trị tại đó nhỏ hơn x trong mảng v.
int ls(vector<int> &v , int l , int r , int x){
    int ans = -1; // Khởi tạo ans, nếu không tìm thấy giá trị nhỏ hơn x, hàm sẽ trả về -1.
    
    while( l <= r){ // Vòng lặp hoạt động khi l <= r (khi còn phần tử để tìm kiếm).
        int m = (l + r ) / 2; // Tìm vị trí giữa của mảng.
        
        if(v[m] < x ){ // Nếu phần tử ở vị trí giữa nhỏ hơn x:
            ans = m; // Cập nhật ans là vị trí m (vị trí phần tử lớn nhất nhỏ hơn x cho tới thời điểm hiện tại).
            l = m + 1; // Tiếp tục tìm kiếm trong nửa bên phải (vì cần tìm giá trị lớn hơn nữa).
        }
      
        else { // Nếu phần tử ở vị trí giữa lớn hơn hoặc bằng x:
            r = m - 1; // Giảm r để tìm kiếm trong nửa bên trái.
        }
    }
    
    return ans; // Trả về vị trí của phần tử lớn nhất nhỏ hơn x (hoặc -1 nếu không có).
}

int main(){
    int n, m;
    cin >> n >> m; // Nhập số lượng phần tử của mảng v và mảng v1.
    
    vector<int> v(n); // Tạo mảng v có n phần tử.
    vector<int> v1(m); // Tạo mảng v1 có m phần tử.
    
    // Nhập giá trị cho mảng v.
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    // Nhập giá trị cho mảng v1.
    for(int i = 0; i < m; i++){
        cin >> v1[i];
    }
    
    // Sắp xếp mảng v1 để tìm kiếm nhị phân hiệu quả.
    sort(v1.begin(), v1.end());
    
    // Với mỗi phần tử trong mảng v, tìm vị trí của phần tử lớn nhất nhỏ hơn giá trị đó trong mảng v1.
    for(int i = 0; i < n; i++){
        int res = ls(v1, 0, m - 1, v[i]); // Gọi hàm ls để tìm chỉ số của phần tử lớn nhất nhỏ hơn v[i] trong v1.
        cout << res + 1 << " "; // In ra vị trí tìm được cộng 1 (chuyển từ chỉ số 0-based sang 1-based).
    }
    
    return 0;
}
