#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n; 
	
	vector<char> v(n); // Tạo một vector để lưu các ký tự
	set<char> se; // Tạo một set để lưu các ký tự không trùng nhau
	
	for(int i = 0; i < n; i++){
		cin >> v[i]; 
		se.insert(v[i]); // Thêm ký tự vào set (sẽ tự động loại bỏ ký tự trùng)
	}
	
	cout << se.size() << endl; // In ra số lượng ký tự khac nhau
	
	for(char i : se){
		cout << i << " "; // In các ký tự duy nhất theo thứ tự tăng dần
	}
	cout << endl;
	
	for(auto it = se.rbegin(); it != se.rend(); it++){
		cout << *it << " "; // In các ký tự duy nhất theo thứ tự giảm dần
	}
}
