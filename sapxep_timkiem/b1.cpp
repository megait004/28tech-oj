#include<iostream> 
#include<algorithm> 
using namespace std;

int main(){
    int n; 
    cin >> n; 

    int arr[n]; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }

    sort(arr, arr + n); // Sắp xếp mảng theo thứ tự tăng dần

    int dem = 0; // Biến đếm số lượng giá trị khác nhau

    // Lặp qua các phần tử của mảng
    for(int i = 0; i < n; i++){
        // Nếu phần tử hiện tại khác với phần tử kế tiếp, tăng đếm
        if(arr[i] != arr[i + 1]){
            dem = dem + 1;
        }
    }

    cout << dem; 
    return 0; 
}
