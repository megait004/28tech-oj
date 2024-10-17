#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Hàm tìm vị trí xuất hiện cuối cùng của giá trị x trong mảng v từ vị trí l đến r.
int lastPos(vector<int> &v , int l , int r , int x){
    int ans = -1; // Khởi tạo biến ans, lưu trữ vị trí cuối cùng tìm thấy, mặc định là -1 (nếu không tìm thấy).
    
    while(l <= r){ // Khi l <= r, tiếp tục tìm kiếm.
        int m = (l + r ) / 2; // Tính vị trí giữa mảng.
        
        // Nếu phần tử ở vị trí giữa bằng x, cập nhật ans và tiếp tục tìm kiếm bên phải.
        if(v[m] == x){
            ans = m; // Lưu vị trí cuối cùng tìm thấy x.
            l = m + 1; // Tìm tiếp ở bên phải (vùng sau m).
        }
        
        // Nếu phần tử giữa nhỏ hơn x, tìm kiếm trong đoạn bên phải (lên trên).
        else if(v[m] < x){
            l = m + 1;
        }
        
        // Nếu phần tử giữa lớn hơn x, tìm kiếm trong đoạn bên trái (xuống dưới).
        else {
            r = m - 1;
        }
    }
    
    // Trả về vị trí xuất hiện cuối cùng của x hoặc -1 nếu không tìm thấy.
    return ans;
}

int main(){
    int n; 
    cin >> n; // Nhập số lượng phần tử của mảng.
    
    int x; 
    cin >> x; // Nhập giá trị cần tìm vị trí xuất hiện cuối cùng.
    
    vector<int> v(n); // Tạo một vector có n phần tử.
    
    // Nhập các giá trị cho mảng v.
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    
    // Sắp xếp mảng v để thực hiện tìm kiếm nhị phân.
    sort(v.begin(), v.end());
    
    // Gọi hàm lastPos để tìm vị trí xuất hiện cuối cùng của x trong mảng.
    cout << lastPos(v, 0, n - 1, x);
    
    return 0;
}
