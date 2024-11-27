#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_set<int> prefixSumSet;  // Set lưu trữ tổng cộng dồn
    int prefixSum = 0;  // Biến lưu trữ tổng cộng dồn hiện tại

    // Duyệt qua mảng
    for(int i = 0; i < n; i++){
        prefixSum += arr[i];  // Cộng dồn giá trị vào tổng

        // Kiểm tra nếu tổng cộng dồn bằng 0 hoặc đã gặp trước đó
        if(prefixSum == 0 || prefixSumSet.find(prefixSum) != prefixSumSet.end()){
            cout << 1;  // Tồn tại mảng con có tổng bằng 0
            return 0;
        }

        // Lưu tổng cộng dồn vào set
        prefixSumSet.insert(prefixSum);
    }

    // Nếu không tìm thấy mảng con có tổng bằng 0
    cout << -1;

    return 0;
}
