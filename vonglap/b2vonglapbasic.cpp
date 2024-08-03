#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n ;
	// In ra các số nguyên không âm là bội của 3 <= N (dùng bước nhảy = 3)
	for(int i = 0 ; i <= n ; i += 3){
		cout << i ;
		if(i >= 0) {
			cout << " ";
		}
	}
	cout << endl;
	
	//In ra các số nguyên không âm là lũy thừa của 2 <= N
	for(int i = 1 ; i <= n ; i *=2){
		cout << i ;
		if(n > 1){
			cout << " ";
		}
	}
	cout << endl;
	
	// In ra số nguyên không âm nhỏ nhất lớn hơn hoặc bằng N mà chia hết cho 17. (Tạo vòng for bắt đầu từ n, kiểm tra thấy số chia hết cho 17 thì in ra và break)
	for( int i = n ; i >= n ; i++ ){
		if( i % 17 == 0 ){
			cout << i ;
			break;
		}
	}
	cout << endl;
	
	// In ra số nguyên không âm lớn nhất nhỏ hơn N mà chia hết cho 7. (Tạo vòng for bắt đầu từ N - 1, kiểm tra thấy số chia hết cho 7 thì break)
	for(int i = n -1 ; i < n ;i--){
		if( i % 7 == 0 ){
			cout << i ;
			break;
		}
	}
	cout << endl;
	
	//In ra các số trong dãy số 1, 2, 4, 7, 11, 16, 22.... mà nhỏ hơn hoặc bằng N, các số trong dãy này có khoảng cách giữa các số tăng dần lên 1 đơn vị.
	/* giải thích cụ thể :
	  đầu bài cho 1 dãy số quy luật của dãy này là
	  cứ sau 1 lần lặp i thì giá trị của nó bằng khoảng cách tăng thêm 1 
	  đơn vị :
	  -> i1 = 1 => kq = 1 vì i1 = kq  do là khởi tạo biến kết quả bằng 1
	  -> i2 = 2 => kq =2 vì bằng kết quả của i1 cộng cho bước nhảy i1
	  .... tương tự vậy 
	  => rút ra là : kết quả sau bằng kết quả thứ nhất cộng cho bước nhảy i đằng trước nó 
	*/
	int kq = 1 ; 
	for( int i = kq  ; kq <= n ;i++){
		cout << kq << " ";
		kq = i + kq;
			  
	}
	
 	return 0;
}