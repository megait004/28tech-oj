#include<iostream>
using namespace std;
int main(){
	int a ,b ,n ;
	cin >> a >> b >> n ; // pt ax + by = n
	// phân tích : x ,y >=0 , x đạt max khi y = 0 thì ta sẽ có x = n / a nên ta sẽ duyệt x từ 0 đến n / a sau đó
	// kiểm tra xem thằng tử nghĩa là thằng y nó có chia hết cho b không nếu có thì có cặp nghiệm nguyên không âm
	
	int y ;
	for(int i = 0; i <= n /a ;i ++){
		y = n - (long long)a * i ;
		if(y % b == 0){
			cout << "YES";
			return 0;
	}
  }
	cout << "NO";
	return 0;
}