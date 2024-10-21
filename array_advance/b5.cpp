#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n; // Nhập số lượng thành phố

    // Khai báo mảng arr để lưu tọa độ các thành phố
    int arr[n]; 
    
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; // Nhập tọa độ của từng thành phố
    }

    int mini; // Biến lưu khoảng cách tối thiểu
    int maxi; // Biến lưu khoảng cách tối đa

    
    for(int i = 0 ; i < n ; i ++){

        // Nếu là thành phố đầu tiên
        if(i == 0 ){
            mini = arr[1] - arr[0]; // Khoảng cách nhỏ nhất là đến thành phố thứ hai
            cout << mini; // In ra mini
            maxi = arr[n - 1 ] - arr[0]; // Khoảng cách lớn nhất là đến thành phố cuối cùng
            cout << " " << maxi; // In ra maxi

        }
        // Nếu là thành phố cuối cùng
        else if(i == n - 1 ){
            mini = arr[n - 1 ] - arr[n - 1 - 1]; // Khoảng cách nhỏ nhất là đến thành phố kế trước
            cout << mini; // In ra mini
            maxi = arr[n - 1 ] - arr[0]; // Khoảng cách lớn nhất là đến thành phố đầu tiên
            cout << " " << maxi; // In ra maxi

        }
        // Nếu là các thành phố nằm giữa
        else {
            int mini2;
            mini = arr[i] - arr[i - 1]; // Khoảng cách đến thành phố trước
            mini2 = arr[i + 1] - arr[i]; // Khoảng cách đến thành phố sau

            // So sánh để tìm khoảng cách nhỏ nhất
            if(mini < mini2){
                cout << mini << " "; // In ra khoảng cách nhỏ nhất
            }
            else {
                cout << mini2 << " "; // In ra khoảng cách nhỏ nhất nếu mini2 nhỏ hơn
            }

            int maxi2;
            maxi = arr[i] - arr[0]; // Khoảng cách đến thành phố đầu tiên
            maxi2 = arr[n - 1 ] - arr[i]; // Khoảng cách đến thành phố cuối cùng

            // So sánh để tìm khoảng cách lớn nhất
            if(maxi > maxi2){
                cout << maxi << " "; // In ra khoảng cách lớn nhất
            }
            else 
                cout << maxi2 << " "; // In ra khoảng cách lớn nhất nếu maxi2 lớn hơn
        }
        cout << endl; // Xuống dòng sau mỗi lần in giá trị của mini và maxi
    }
}
