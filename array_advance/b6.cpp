#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

// Hàm tính ước số chung lớn nhất (UCLN) của hai số a và b
int ucln(int a , int b){
    while(b != 0 ){ // Khi b khác 0
        int r = a % b; // Tính phần dư của a chia cho b
        a = b; // Gán a bằng b
        b = r; // Gán b bằng phần dư
    }
    // Khi b = 0, a chính là UCLN
    if( b == 0)
        return a; // Trả về UCLN
}

int main(){
    int n; 
    cin >> n; // Nhập số lượng phần tử của mảng
    vector<int> v(n); // Khởi tạo mảng v có n phần tử
    for(int i = 0; i < n; i++){
        cin >> v[i]; // Nhập từng phần tử vào mảng
    }
    
    int dem = 0; // Biến đếm số cặp số nguyên tố cùng nhau
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            // Nếu UCLN của hai số v[i] và v[j] bằng 1 thì chúng là nguyên tố cùng nhau
            if(ucln(v[i], v[j]) == 1){
                dem++; // Tăng biến đếm lên 1
            }
        }
    }
    
    cout << dem; 
}