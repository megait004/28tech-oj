#include<iostream>
#include<map> 
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    map<int,int> mp; // Khởi tạo map để lưu trữ số và số lần xuất hiện của nó

    // Nhập các phần tử vào mảng arr và đếm số lần xuất hiện của từng số
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        mp[arr[i]]++; // Tăng số lần xuất hiện của phần tử arr[i] trong map
    }

   
    for(auto it : mp){
        cout << it.first << " " << it.second << endl; // In ra giá trị (số) và số lần xuất hiện
    }
    cout << endl; 

    // In ra từng số trong mảng arr và số lần xuất hiện của nó, chỉ in một lần cho mỗi số
    for(int i = 0; i < n; i++){
        if(mp[arr[i]] != 0){ // Kiểm tra nếu số còn xuất hiện trong map
            cout << arr[i] << " " << mp[arr[i]] << endl; // In ra số và số lần xuất hiện
            mp[arr[i]] = 0; // Đánh dấu số này đã được in ra bằng cách gán giá trị là 0
        }
    }

    return 0; 
}