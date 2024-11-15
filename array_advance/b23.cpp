#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n ; cin >> n ; 
    int arr[n];  
    int arr2[n];  

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
 
    for(int i = 0 ; i < n ; i++){
        cin >> arr2[i];
    }
    // Sắp xếp mảng arr theo thứ tự tăng dần
    sort(arr , arr + n );

    // Sắp xếp mảng arr2 theo thứ tự giảm dần
    sort(arr2 , arr2 + n , greater<int>());

    // Tạo vector v để chứa kết quả
    vector<int> v;

    // Đưa các phần tử từ arr và arr2 vào vector v
    for(int i = 0 ; i < n ; i++){
        v.push_back(arr[i]);  // Thêm phần tử từ arr vào v
        v.push_back(arr2[i]); // Thêm phần tử từ arr2 vào v
    }

    // In ra tất cả các phần tử trong vector v
    for(int it : v){
        cout << it << " ";  
    }
}
