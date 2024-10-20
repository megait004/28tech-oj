#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool check = true;
    
    // Kiểm tra các cặp liên tiếp < mảng tăng chặt >
    for(int i = 0; i < n - 1; i++){
        if(arr[i] >= arr[i + 1]){  // Sửa điều kiện để loại bỏ việc so sánh số bằng nhau
            cout << "NO";
            check = false;
            break;
        }
    }

    if(check){
        cout << "YES";
    }

    return 0;
}
