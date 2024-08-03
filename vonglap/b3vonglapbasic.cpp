#include<iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	for(int i = 1 ;i <= n ;i++){
		cout << i ;
		if(i >= 1 ){
			cout << " ";
		}
	}
	cout << endl;
	
	for(int i = n ; i >= 0 ; i--){
		cout << i ;
		if( i >= 0){
			cout << " ";
		}
	}
	cout << endl;
	
	for(int i = 0 ; i <= n ;i+=2){
		cout << i ;
		if( i >= 0){
			cout << " ";
		}
	}
	cout << endl;
	
	for(int i = 1 ; i <= n ; i+=2){
		cout << i ;
		if(i >= 1 ){
			cout << " ";
		}
	}
	cout << endl;
	
	for(int i = 0 ; i < n ;i+=4 ){
		cout << i ;
		if(i >= 0){
			cout << " ";
		}
	}
	cout << endl;
		char c ;
		c = 97;
	for(int i = 1 ;i <= n ;i++){
		if(c >= 97 && c <= 122){
			cout << c << " ";
		}
		c = c + 1;
	}
	cout << endl;
	
//	char d;
//	d = 122;
//	char be;
//	for(int i = n ; i >=1; i--){
//		if(d >= 97 && d <= 122){
//		 cout << d << " ";
//		}
//		d = d - 1;
//	}

 /*
 	'z' - N + 1: Đoạn mã này tính toán ký tự bắt đầu để in ra N chữ cái 
 	 cuối cùng.
 	 
	'z' là ký tự cuối cùng trong bảng chữ cái Latin.
	N là số lượng chữ cái bạn cần in ra.
	
	z' - N + 1 tính toán ký tự bắt đầu để đảm
 	bảo rằng bạn in đủ N chữ cái cuối cùng.
 	
  	Ví dụ, nếu N là 5, thì bạn cần bắt đầu từ ký tự 'v'
 	vì z - 5 + 1 = v). 
*/
	char start = 'z' - n + 1;
    while (start <= 'z') {
        cout << start << " ";
        start++;
    }
    cout << endl;

	
	return 0;
}