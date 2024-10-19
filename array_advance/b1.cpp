#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#define mod 1000000007
using namespace std;
bool isPrime(long long n ){
	if(n < 2) return false;
	for(long long i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int  main(){
	long long n ; cin >> n ; 
	long long arr[n];
	for(long long i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}
	// số lớn nhất trong mảng kèm theo vị trí 
	long long max_value = -10000000000;
	long long vitrimax;
	for(long long i = 0 ; i < n ; i++){
		if(max_value <= arr[i]){
			max_value = arr[i];
			vitrimax = i;
		}
	}
	cout << max_value << " " << vitrimax;
	cout << endl;
	// số nhỏ nhất kèm theo vị trí cuối cùng nếu có 2 nhỏ số nhất bằng nhau
	long long min_value = 1000000008;
	long long vitri;
	for(long long i = 0 ; i < n ; i++){
		if(arr[i] <= min_value){
			min_value = arr[i];
			vitri = i ;
			if( i > vitri ){
				vitri = i ;
			}
		}
		
	}
	cout << min_value << " " << vitri;
	cout << endl;


	// số lượng số nguyên tố trong mảng 
	long long dem = 0 ; 
	for(long long i : arr){
		if(isPrime(i)){
			dem++;
		}
		
	}
	cout << dem << endl;
	
	//ghi ra tích lớn nhất của 2 số trong mảng
	long long tichMax = -1000000000;
		for(long long i = 1 ; i < n  ; i ++){
			if(arr[0] * arr[i] > tichMax){
				tichMax = arr[0] * arr[i];
			}
		}
		cout << tichMax ;
		cout << endl;
  // kiểm tra mảng đối xứng 

    bool isSymmetric = true;
    for (long long i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            isSymmetric = false;
            break;
        }
    }

    // Xuất kết quả
    if (isSymmetric) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
	
	// Tinh tich cac so trong mang
	long long tich = 1 ;
	for(long long i : arr){
		tich  = ((tich % mod) * (i % mod)) % mod ;
		
	}
	cout << tich ;
}
