#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n;  
    // Nhập vào số phần tử của mảng đầu tiên
    cin >> n;  
    int m;  
    // Nhập vào số phần tử của mảng thứ hai
    cin >> m;  

    // Khai báo vector chứa các phần tử của mảng đầu tiên và mảng thứ hai
    vector<int> v(n);
    vector<int> v2(m);

    // Khai báo một tập hợp (set) để lưu trữ các phần tử duy nhất
    set<int> se;

    // Vòng lặp để nhập và thêm các phần tử của mảng đầu tiên vào tập hợp
    for(int i = 0; i < n; i++){
        cin >> v[i];
        se.insert(v[i]);  // Thêm phần tử vào set
    }

    // Vòng lặp để nhập và thêm các phần tử của mảng thứ hai vào tập hợp
    for(int i = 0; i < m; i++){
        cin >> v2[i];
        se.insert(v2[i]);  // Thêm phần tử vào set
    }

    // Duyệt qua các phần tử của set theo thứ tự giảm dần và in ra
    for(auto it = se.rbegin(); it != se.rend(); ++it){
        cout << *it << ' ';
    }

    return 0;
}
