#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n ; cin >> n;
	long long sum = 0;
	//duy?t u?c t?i uu t? 1 d?n can c?a n
	for(int i = 1 ; i <= sqrt(n) ;i++){
		if(n % i == 0){
			sum = sum + i;
			if(i != n / i){ // ki?m tra u?c con l?i n?u ma no khac u?c tru?c thi m?i tinh 
			// vi d? nhu u?c c?a 16 co i la 4 u?c con l?i cung la 4 nhung ch? du?c tinh 1 l?n 
				sum = sum + n / i;
			}
		}
	}
	cout << sum ;
	return 0;
}