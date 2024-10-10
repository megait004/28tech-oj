#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    set<int> se;  // Sử dụng set để lưu các phần tử, set không lưu các phần tử trùng lặp
    vector<int> v(n);
    
    // Thêm các phần tử ban đầu vào set
    for(int i = 0; i < n; i++){
        cin >> v[i];
        se.insert(v[i]);  // Chèn từng phần tử từ vector v vào set
    }
	// nhập số lượng thao tác
    int q; 
    cin >> q;

    while(q--){
        int tt; 
        // nhập thao tác 
        cin >> tt;

        if(tt == 1){
            // Thao tác 1: Thêm phần tử add vào set
            int add; 
            cin >> add;
            se.insert(add);  // Chèn phần tử add vào set
        }
        else if(tt == 2){
            // Thao tác 2: Xóa tất cả các phần tử có giá trị x nếu tồn tại
            int x; 
            cin >> x;
            se.erase(x);  // Xóa phần tử x khỏi set nếu nó tồn tại
        }
        else if(tt == 3){
            // Thao tác 3: Tìm phần tử nhỏ nhất trong set
            auto min_value = se.begin();  // `begin()` trỏ tới phần tử nhỏ nhất trong set
            cout << *min_value << endl;   // In ra phần tử nhỏ nhất
        }
        else if(tt == 4){
            // Thao tác 4: Tìm phần tử lớn nhất trong set
            auto max_value = se.rbegin();  // `rbegin()` trỏ tới phần tử lớn nhất trong set
            cout << *max_value << endl;    // In ra phần tử lớn nhất
        }
    }
    return 0;
}
