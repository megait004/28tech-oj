#include<iostream>
using namespace std;
int main(){
	long long n ;
	cin >> n;
	int dem;
	dem = 0 ;
	long long tmp = n ;
	while(n != 0){ //
		dem++;
		n = n /10;	
	}
	if(dem % 2 == 0){
		cout << "NOT FOUND";
	}
	else {
		// đi tìm chữ số ở giữa 
		int middleIndex = dem / 2 ; // là chữ số thứ n / 2 ;
		// lấy trên n là sai vì n đã về 0 rồi
		for(int i = 0 ; i <middleIndex ; i++){ // duyệt từ 0 đến  chữ số đứng giữa
			tmp /= 10 ;
		}
			int middleValue = tmp %  10; // lấy ra chữ số đứng giữa
			cout << middleValue;
	}
	return 0;
}