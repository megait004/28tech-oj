#include<iostream>   
#include<algorithm>  
using namespace std;

// Hàm sl() đếm số lượng chữ số là 0, 6 hoặc 8 trong một số
int sl(int n) {
    // Nếu số n là 0, thì coi như có 1 chữ số (0)
    if(n == 0) return 1;

    int dem = 0; // Biến đếm số lượng chữ số 0, 6 hoặc 8

    // Vòng lặp xử lý từng chữ số của n
    while(n != 0) {
        int digit = n % 10;  // Lấy ra chữ số cuối của n
        // Kiểm tra nếu chữ số đó là 0, 6 hoặc 8
        if(digit == 0 || digit == 6 || digit == 8) {
            dem++;  // Nếu đúng, tăng biến đếm
        }
        n = n / 10;  // Giảm n bằng cách bỏ chữ số cuối
    }

    return dem;  // Trả về số lượng chữ số 0, 6 hoặc 8
}

// Hàm so sánh cmp() được dùng trong hàm sort() để sắp xếp các số
bool cmp(int x, int y) {
    // Nếu số lượng chữ số 0, 6, 8 của x khác với y
    if(sl(x) != sl(y)) {
        // Trả về true nếu số lượng chữ số của x nhiều hơn y (sắp xếp giảm dần)
        return sl(x) > sl(y);
    }
    else 
        // Nếu số lượng chữ số của x và y bằng nhau, sắp xếp theo giá trị tăng dần
        return x < y;
}

int main() {
    int n; 
    cin >> n;  // Nhập số lượng phần tử của mảng

    int arr[n];  // Khai báo mảng arr có n phần tử
    // Nhập các phần tử cho mảng
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sắp xếp mảng arr theo hàm cmp
    sort(arr, arr + n, cmp);

    // In ra mảng đã được sắp xếp
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;  
}