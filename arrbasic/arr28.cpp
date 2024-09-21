#include<iostream>
#include<vector>
#include<iterator>
int mark[1000001];
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i ++){
		cin >> v[i];
	}
	for(int i = 0 ; i < v.size() ; i++){
		mark[v[i]]++;
	}
	for(int i = 0 ; i < v.size();i++){
		if(mark[v[i]] !=  0){ // dòng này là kiểm tra chỉ số trong mảng mark nếu nó khác 0 nghĩa là nó xuất hiện
			cout <<  v[i] << " " << mark[v[i]] << endl;// in ra thứ tự trong mảng v , kèm tần suất của nó
			// sau khi in ra xong gán nó lại = 0 để chỉ in 1 lần;
			mark[v[i]] =  0 ;
		}
	}
	return 0; 
}