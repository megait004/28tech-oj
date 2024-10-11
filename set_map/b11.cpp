#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

int main(){
    // Khai báo hai biến n và m để lưu số lượng phần tử của hai mảng
    int n, m; 
    cin >> n >> m;

    // Khai báo hai vector v và v2 để lưu các phần tử của mảng đầu tiên và mảng thứ hai
    vector<int> v(n);
    vector<int> v2(m);

    // Nhập các phần tử cho mảng đầu tiên (v)
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    // Nhập các phần tử cho mảng thứ hai (v2)
    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }

    // Khai báo một map để đánh dấu các phần tử xuất hiện trong mảng thứ hai (v2)
    map<int, int> mp;
    for(int x : v2){
        mp[x] = 1; // Gán giá trị 1 cho tất cả phần tử có trong v2
    }

    // Khai báo một set để lưu các phần tử duy nhất của mảng đầu tiên không có trong mảng thứ hai
    set<int> se;
    for(int x : v){
        // Nếu phần tử xuất hiện trong map (tức là có trong v2) thì xóa khỏi map
        if(mp[x] == 1){
            mp.erase(mp[x]);
        } 
        // Nếu không có trong map, nghĩa là phần tử không có trong mảng thứ hai, thêm vào set
        else {
            se.insert(x);
        }
    }

    // Xuất ra các phần tử trong set, các phần tử này là những phần tử duy nhất không có trong mảng thứ hai
    for(auto it = se.begin(); it != se.end(); it++){
        cout << *it << " ";
    }

    return 0;
}
