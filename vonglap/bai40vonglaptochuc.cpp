#include<iostream>
using namespace std;
int main(){ // cách 1 if else đến bảng thứ 9 cách này chỉ in được đến bảng 9 theo đầu vào n 
	int n ; cin >> n;
//	for(int i = 1 ; i <= n ;i++){ // số bảng cửu chương tương ứng với n , ví dụ n bằng 3 có 3 bảng cửu chương từ bẳng 1 đến bảng 3
//			for(int j = 1 ; j <= 10 ; j++){ // duyệt từ 1 đến 10 vì mỗi bẳng cửu chương nhân từ 1 đến 10
//				
//				if( i == 1 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 2 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 3 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 4 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 5 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 6 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 7 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 8 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//				if( i == 9 ){
//					cout << i << " x " << j << " = " << i * j  << endl; 
//				}
//			}
//		
//		
//		cout << endl;
//	}
// cách 2 
 //  sử dụng biến đếm gán biến đếm bằng i , sau môn lần in thì tăng biến đếm lên 1 đơn vị bảng tiếp theo sẽ là bảng của biến đếm sau khi tăng 
	for(int i = 1 ; i <= n ; i++){
		int dem = i;
		for(int j = 1 ; j <= 10 ; j++){
			cout << dem << " x " << j << " = " << dem * j  << endl;
		}
		dem++;
		cout << endl;
	}





}