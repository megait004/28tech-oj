#include<iostream> 
#include<set>    
#include<map>      
#include<vector>   
using namespace std;

int main(){
    // Nhập vào số lượng phần tử của mảng thứ nhất và thứ hai
	int n ; cin >> n ;
	int m ; cin >> m ;
    
    // Khai báo 2 vector để lưu các phần tử của 2 mảng
	vector<int> v(n);  // Vector đầu tiên với n phần tử
	vector<int> v2(m); // Vector thứ hai với m phần tử

	for(int i = 0 ; i < n ; i ++){
		cin >> v[i];
	}

	for(int i = 0 ; i < m ; i++){
		cin >> v2[i];
	}

    // Khai báo một set để lưu các phần tử không trùng và một map để đánh dấu
	set <int> se;
	map<int,int> mp;

    // Đánh dấu tất cả các phần tử trong vector thứ hai vào map
	for(int x : v2){
		mp[x] = 1;
	}

    // Duyệt qua các phần tử của vector thứ nhất
    // Nếu phần tử không tồn tại trong map (tức là không có trong vector thứ hai),
    // ta thêm phần tử đó vào set
	for(int x : v){
		if(mp[x] != 1){
			se.insert(x);
		}
	}

    // In ra các phần tử trong set (các phần tử này chỉ có trong vector thứ nhất, không có trong vector thứ hai)
	for(auto it = se.begin() ;it != se.end(); it++){
		cout << *it << " ";
	}
    
	return 0; 
}
