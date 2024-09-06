#include<iostream>
#include<cmath>
// bài này ngược lại với bài chỉ cần có 1 số nt có số mũ >= 2;
// bài này thì cần tất cả thừa số có số mũ >= 2 
// 
bool ptnt(int n){
	for(int i = 2 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			int sm = 0;
			while(n % i == 0){
				sm++;
				n = n / i;
			}// kiểm tra ngược lại nếu như mà có 1 số mũ nhỏ hơn 2 thì return false;
			if( sm < 2 ){
				return false;
			}
		}
	}
	if(n != 1){ // ktra thừa số nto cuối cùng vì nó là cuối cùng nên số mũ luôn bé hơn 2 return false luôn 
		return false;
	}
	return true;

}
using namespace std;
int main(){
	int a , b;
	cin >> a >> b;
	for(int i = a ; i <= b ;i++){
		if(ptnt(i)){
			cout << i << " ";
		}
	}
	return 0;
}