#include<iostream>
#include<vector>
#include<iterator>
// bài này là vừa in ra tần suất và in ra sự xuất hiện của số đó trong mảng v và sắp xếp từ bé đến lơn 
long long mark[1000001];
using namespace std;
int main(){
	long long  n ; cin >> n ;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	// vòng for này là kiểm tra tần suất xuất hiện của giá trị i trong mảng v ;
	for(int i = 0 ; i < v.size(); i++){
		mark[v[i]]++;
	}
	// vòng for này là in ra giá trị trong mảng v từ bé đến lớn và tần xuất của nó ;
	for(int  i = 0 ; i <= 1000000 ;i++){
		if(mark[i] != 0){
			cout << i <<  " " << mark[i] << endl;
		}
	}
	return 0;
}