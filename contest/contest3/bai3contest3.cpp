#include<iostream>
using namespace std;
int main(){
	int a , b ;
	cin >> a >> b;
		if( a == b ){ // nếu mà a == b , ví dụ 1 = 1 , 2 = 2 ....
			cout << "28tech";
		}
	
		 else if(a > b ){ // kiểm tra nếu như mà a > b thì hoán đổi gia trị
			swap(a,b);
		}
		for(int i = a ; i <= b;i++){
			if(i % 2 == 0 || i % 3 == 0|| i % 5 ==0){ // kiểm tra những chữ số chia hết cho 2,3,5 trong đoạn a đến b
				cout << i << " ";
			}
		}
		
	
	return 0;
}
