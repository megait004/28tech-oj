#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	// hinh 1 : khoi tao bien dem ở đây thì ta sẽ thấy có i hàng và mỗi hàng có i ký tự nhưng sau mỗi lần in ra j ký tự thì tăng biêtns đếm lên 1 đơn vị in ra biến đếm
	int dem =0;
	for(int i = 1 ; i <= n ;i++){
		for(int j = 1 ;j <= n ; j++){ // mỗi hàng có n kí tự 
			dem = dem + 1;
			cout << dem  << " ";
			
		}
		cout  << endl;
	}
	cout << endl;
	// hinh 2 :

	for(int i = 1 ; i <= n ;i++){
		for(int j = 1 ; j <= n ;j++){
			cout << i +j -1 << " "; // vì hàng thứ i thì cộng thêm j - 1
		}
		cout << endl;
	}
	cout << endl;
	
	// hinh 3: vẫn là có i hàng với i ký tự nhưng trừ đi n -i khoảng trắng vòng duyệt j và thây bằng ký tu ~
	for(int i = 1 ; i <= n ;i++){ 
		for(int j =1 ; j <= n-i;j++){
			cout << "~";
		}
		for(int j = 1 ;j <= i; j++){
			cout << i+1 -1; // in ra i cộng 1 trừ 1 đơn vị 
		}
		cout << endl;
	}
	cout << endl;
	
	// hinh 4:
	int dem1;
	for(int i =1 ; i <= n ;i++){
			dem1 = i ; int kc ;
			kc = n -1;
		for(int j = 1 ;j <=i; j++){ // hàng thứ i có i ký tự nhưng mà ký tự j tăng dần 
			cout<< dem1 << " ";
			dem1 += kc;
			kc-=1;
		}
		cout << endl;
	}
}