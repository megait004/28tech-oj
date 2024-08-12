#include<iostream>
using namespace std;
int main(){
	long long a ,b;
	cin >> a >> b;// bài này ta sẽ chú ý như sau :
	// tìm gcd(a! && b!) ta sẽ phải đi so sánh giữa hai số a và b
	// - nếu như mà a <b thì ta sẽ tính giai thừa của thằng a 
	// - nếu như mà a > b thì ta sẽ tính giai  thừa của thằng b 
	// - nếu như mà  a bằng thằng b thì ta tính giai thừa của 1 trong 2 thằng này 
	// vì ta biết ucln của 2 thằng sẽ là 1 trong 2 thằng a và b và 2 ,nếu a lớn b thì ucln của a và b sẽ là b nếu a % b ==0 và ngược lại
	// gợi ý tổng quan tìm xem ucln của 10! và 5 !
	long long gt =1;
	if(a ==b ){
		for(int i =1 ;i <=a ;i++){
			gt =gt * i;
		}
		cout << gt;
		return 0;
	}
	if(a < b ){
		for(int i =1 ;i<=a;i++){
			gt = gt * i;
		}
		cout << gt ;
	}
	else if(a > b  ){
		for(int i =1;i<=b;i++){
			gt = gt *i;
		}
		cout << gt ;
	}
	
	return 0;
}