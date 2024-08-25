#include<iostream>
#include<math.h>
using namespace std;
int main(){
	// kiem tra so chinh phuong su dung ham sqrt khai can
	// neu nhu can * can == n có nghĩa là phần dư khi tính căn là 0 thì nhân lại sẽ la số chính phương
	// còn nếu khai can có phần lẻ đằng sau nhân lại không bằng số n thì không phải số chính phương
	long long  n ;
	cin >> n;
	long long can = sqrt(n);
	if((long long)can * can == n){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	return 0;
}
