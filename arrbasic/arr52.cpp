#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	// Vì phần tử đầu và phần tử cuối không có số đứng sau hoặc đứng trước nên bỏ qua không tính 
	// Duyệt từ index 1 cho đến n - 1 
	for(int i = 1 ; i < n - 1 ; i++){
		// Kiểm tra điều kiện nếu mà phần tử ở giữa nhở hơn ptu đằng sau và trước nó thì là oce 
		if(v[i] < v[i - 1] && v[i] < v[i+1]){
			cout << v[i] << " ";
		}
	}
	return 0; 
}