#include<iostream>
#include<vector>
#include<iterator>
// khai báo 1 mảng đánh dấu đủ lớn
long long mark[1000001];
using namespace std;
int main(){
	int n ; cin >> n ;
	vector<int> v(n);
	// duyệt để nhập vector
	for(int i = 0 ; i < n ; i ++){
		cin >> v[i];
	}
	// duyệt vector
	for(int i = 0 ; i < v.size();i++){
		// mark[v[i]]++ có nghĩa là ta lấy giá trị ở trong mảng v làm chỉ số của mảng đánh dấu
		// duyệt nó trong mảng mark là để xem giá trị trong mảng v xuất hiện bao nhiều lần trong mảng mark
		mark[v[i]]++;
	}
	// tạo 1 biến đếm để lưu sự xuất hiện của các số khác nhau
	long long  dem = 0 ;
	for(int i = 0 ; i <= 1000001 ; i ++){
		// ở đây kiểm tra mark[i] khác 0 nghĩa là kiểm tra cái chỉ số của mảng mark xem cái nào khác 0 thì ta sẽ tăng biến đếm 
		// cụ thể là mảng mark[3] => index : 									0 ,1 ,2 ,3
// giá trị trong mảng mark: ở vòng for trên ta xe biết nó đã xuát hiện chưa		1  1  0  1    => có 3 phần tử khác nhau
		if(mark[i] != 0){
			dem++;
		}
	}
	cout << dem ;
}