#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	for(int i = 0 ; i < n ; i++){
		// xoá phần tử 28 chỉ việc bỏ qua nó sau mỗi lần duyệt là xong 
		if(v[i] == 28){
			continue;
		}
		else 
			cout << v[i] << " ";
	}
	return 0;
}