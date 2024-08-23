#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n; cin >> n ; // so giay nhap vao;
	long long h , p , s;
	if( n  % 60 == 0){ // kiem tra xem so giay co chia het cho 60 
		p = n / 60; // so giay chi het cho 60 thi so phut se la
		
		if( p >= 60){ // kiem tra so phut >= 60
		// nếu mà sô phút lơn hon 60 số giờ sẽ là :
		h = p / 60 ;
		// số phút mới sẽ bằng phần dư của phút chia 60
		int p1 = p % 60 ;
		// số giây sẽ là số phút mới chia cho 60 
		s = p1 / 60;
		
			cout << h << "h" << " " << ": " << p1 <<"m" << " " <<":" << " " << s << "s";
	}
		else if (p < 60){
			
		h = 0 ;
		
		s = n % 60;
		
			cout << h << "h" << " " << ": " << p <<"m" << " " <<":" << " " << s << "s";
	}	
	}
	else if(n % 60 != 0){ // trường hợp số giây chia phút không chia hết
		// số phút bằng giây chia nguyên 60 
		p = n / 60;
		
		if( p >= 60){// kiểm tra nếu số phút >= 60
			
		h = p / 60 ; // số giờ sẽ bằng cho phút chia 60
		
		ll p1 = p % 60 ; // số phút mới sẽ là chia lấy dư của p % 60
		
		s = p1 / 60 + n % 60; // số giây sẽ là số phút mới chia nguyên 60 + phần dư của thằng n khi chia nguyên cho 60 và được số phút và dư phần giây còn lại 
		// n % 60 ở đây là số giây dư khi n không chia hết cho 60 
		
			cout << h << "h" << " " << ": " << p1 <<"m" << " " <<":" << " " << s << "s";
	}
		else if (p < 60){
		h = 0 ;
		
		s = n % 60;
		
			cout << h << "h" << " " << ": " << p <<"m" << " " <<":" << " " << s << "s";
	}
	}
	
	return 0;
}