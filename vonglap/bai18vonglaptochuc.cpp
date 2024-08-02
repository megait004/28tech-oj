#include<iostream>
using namespace std;
int main(){
	long long n;
	cin >> n ;
	long long count = 0  ;
	int sl;
	for(int i = 0 ; i < n ;(n = n /10)){ // duyệt đến khi nào n bằng 0 thì dừng lại < chia nguyên cho 10
		sl = n % 10 ; // chia lấy dư để lấy chữ số và so sánh với số nguyên tố
		
		/*ý tưởng : - tạo biến đếm để đếm số lương số nguyên 
					- sử dụng vòng lặp để lấy từng số của n từ phải sang trái
					- kiểm tra chữ số đó có phải là nguyên tố hay không
					  chỉ cẩn kiểm tra nó là số 2 ,3,5,7 vì nhưng số này
				 	  là số nguyên tố nhỏ hơn 9 */
				 	  
		if(sl == 2 || sl == 3 || sl ==5 || sl == 7){
			count = count +1 ;
		}
	}
	cout << count  << endl;
	return 0;
}