#include<iostream>
using namespace std;
bool chanle(int n);
bool check(int n);
	bool chanle(int n){
		int demchan = 0;
		int demle = 0;
		for(int i = 0 ; n > i ; (n = n / 10)){
			if( n % 2 == 0){
				demchan++;
			}
			else if( n % 2 != 0 ){
				demle++;
			}
		}
		if(demchan > demle){
			return true;
		}
		else{
			return false;
		}
	}
	// ham tinh tong chu so va goi ham chanle
	bool check(int n){
		int sum = 0;
		for(int i = 0 ; n > i ; (n = n / 10) ){
			sum = sum + ( n % 10);
			chanle(sum);
		}
		if(chanle(sum)){ //  tương đương với nếu như tổng sum có số chẵn nhiều hơn số lẻ thì return true
			return true;// ở đây gọi thêm hàm chăn lẻ để check tổng sum xem có số lượng số chẵn nhiều hơn lẻ hay không thay vì viết lại như hàm chẵn lẻ 
		}
		else{
			return false;
		}
		
	}
	int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(check(i)){
            cout << i << " ";
        }
    }
}