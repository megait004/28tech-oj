#include<iostream>
using namespace std;
int main(){
	long long n ; cin >> n ; // n bac thang
	long long  m ; cin >> m ; // tim boi cua so m nay
	long long x , y ;
	
	if(n % 2 == 0){ // nêu như n chẵn 
		x = n / 2 ;
		y = n / 1;
		int b ;
		b = (x + m - 1) / m * m; // so buoc khong nam trong doan x va y  thì trả về -1 
		if(b < x || b > y){
			cout << "-1"; 
			
		}
		else{
		for(int i = x ; i <= y ; i++){ // tìm số bước tối thiểu trong đoạn x và y mà chia hết cho m 
			if(i % m == 0){
				cout << i ;
				break;
			}
		}
	  }
	}
	else if(n % 2 != 0){ // trương hợp n lẻ 
		x = n / 2 + 1; // thì số lần đi 2 bước sẽ cộng thêm 1 lần đi 1 bước 
		y = n / 1;
		int b;
		b = (x + m - 1) / m * m;
		if(b < x || b > y){
			cout << "-1";
		}
		else{
		
		for(int i = x ; i <= y ; i++){
			if(i % m == 0){
				cout << i ;
				break;
			}
		}
	  }
	}
	
	
	
}