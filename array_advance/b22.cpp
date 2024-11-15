#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n; 
    map<int, int> mp;  // Khai báo map để đếm số lần xuất hiện của các phần tử
    int arr[n]; 
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Kiểm tra các phần tử trong mảng
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;  // Tăng số lần xuất hiện của phần tử arr[i] trong map
        if(mp[arr[i]] == 2){  // Nếu phần tử đã xuất hiện 2 lần
            cout << arr[i];  // In ra phần tử đầu tiên bị lặp
            return 0;  // Dừng chương trình
        }
    }
    
    // Nếu không có phần tử nào bị lặp
    cout << -1;
    return 0;
}
