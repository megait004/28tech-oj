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
		// nếu mà giá trị kề sau bằng giá trị trước nó thì bỏ qua
		if(v[i] == v[i + 1]){
			continue;
		}
		else 
			cout << v[i] << " ";

	}
}