#include<iostream>
using namespace std;
int main(){
	long long a , b ,k ,vtht;
	vtht = 0;
	 /* ý tưởng : bài này người ta cho là nhảy từ phải sang trái cứ lặp lại như vậy với bước nhảy là k
	 			->trường hợp nếu như bước nhảy là 1 thì chỉ nhảy về bên phải nghĩa là cộng a đơn vị
				->trường hợp nếu như bước nhảy là chẵn thì số lần nhảy sẽ chia đều k /2 và mỗi bên trái phải 
				sẻ nhân cho k / 2 bước nhảy
				-> trường hợp là số lẻ thì vị trí của con ếch sẽ có cách tính là vẫn là chia đều bước nhảy cho a đơn vị và 
				b đơn vị nhưng sẽ cộng thêm a đơn vị ,vì đầu bài cho nhảy từ a đơn vị trước 
				 */
	cin >> a >> b >> k;
	// a la dv ben phai 
	// b la dv ben trai 
	// k la so lan ech nhay
	long long vtphai, vttrai;
	vtphai = vtht + a;
	vttrai = vtht + b;
	if(k == 1 ) {
		cout << vtphai ;
	}
	else if ( k % 2 == 0 ){
		vtht = (long long)vtphai * ( k / 2) - (long long )vttrai * (k / 2); 
		cout << vtht;
	}
	else if(k % 2 !=0){
		vtht = ((long long )vtphai * ( k / 2) - (long long)vttrai * (k / 2)) + a;
		cout << vtht ;
	}
	
	
	
	return 0;
}