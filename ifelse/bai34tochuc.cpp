#include<iostream>
using namespace std;
int main(){ // tim số tiền đặt cược ban đầu của mỗi người chơi có 5 người chơi thì số xu của họ cộng tổng lạ phải chia hết cho 
	int c1 , c2 ,c3 ,c4 ,c5;
	cin >> c1 >> c2 >> c3 >> c4 >>c5;
	int t ;
	 t = c1 + c2 + c3 + c4 +c5 ;
	 if( t % 5 ==0 && t / 5 !=0){
	 	cout << t / 5 ;
	 }
	 else {
	 	cout << "-1";
	 }
	 return 0;
	 
}