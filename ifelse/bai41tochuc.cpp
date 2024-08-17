#include<iostream>
using namespace std;
int main(){
//	trừ '0' khi chuyển ký tự số thành giá trị số nguyên là vì mã ASCII của các ký tự số ('0', '1', '2', ..., '9') 
//	không trực tiếp tương ứng với các giá trị số nguyên.
//	Các ký tự này được mã hóa theo chuẩn ASCII, trong đó:
//
//							'0' có mã ASCII là 48
//							'1' có mã ASCII là 49
//							'2' có mã ASCII là 50
//							'9' có mã ASCII là 57
//				Do đó, để chuyển đổi ký tự số 'c' thành giá trị số nguyên, 
//				bạn cần trừ đi giá trị mã ASCII của '0', tức là 48. Bằng cách này:
//
//				'0' - '0' = 48 - 48 = 0
//				'1' - '0' = 49 - 48 = 1
//				'2' - '0' = 50 - 48 = 2
//				'9' - '0' = 57 - 48 = 9
	int n ; cin >> n;
	char c ;
	int sum = 0;
	int dem = 0;
	for(int i = 1 ; i <= n ;i++){
		cin >> c;
			if(c >=48 && c <= 57 ){
			 	sum = sum + c - '0';  
			}
			else if((c >= 65 && c <= 90) || ( c >= 97 && c <= 122)){
				dem++;
			}
			
	}
	cout << dem << endl;
	cout << sum;
	return 0;
	
}