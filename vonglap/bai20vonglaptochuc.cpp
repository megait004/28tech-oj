#include<iostream>
using namespace std;
int main(){
	long long n ;
	cin >> n;
	// chú ý các trường hợp nó phải là số n  > 1 vì số 1 không phải là số nguyên tố 
	if(n % 2 == 0 && n > 1){ // nếu nhu n là số chẵn thì tổng các chữ số nguyên là 2 mà nó biểu diễn được là n /2 
		cout << n / 2 << endl;
		for(long long i = 1 ; i <= n / 2;i++){ // vòng lặp điều kiện dừng là số lần số 2 được in ra là i <= n /2 vì n / 2 là số lượng chữ số 2 cần in ra 
			cout << 2 << " "; 
		}
	}
	else if( n % 2 != 0  && n > 1){ 
		cout  << n / 2 << endl;		// nếu n là số lẻ thì tổng các chữ số nguyên tố sẽ có được là n /2 số 
									// ví dụ số 9 -> n /2 = 4 số bao gồm ba số " 2 " và một số " 3 "
									// và các chữ số 2 được in ra là (n / 2  -1 ) vì có tổng là 4 số thì số lượng chữ số nguyen tố là 2 phải nhỏ hơn số lượng tổng các số nguyên tố 
									// và số nguyên tố là 3 sẽ được in ra ở cuối vì (số lẻ sẽ phải cộng thêm số nguyên tố là 3 để có tổng = n .
		for(long long i = 1 ; i <= (n /2 -1);i ++){
			cout << 2 << " ";
		}
		cout << 3 ;
	}
	else  if(n <=0 || n == 1){
		cout << "-1";
		
	}

}