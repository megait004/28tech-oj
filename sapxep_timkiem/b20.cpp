#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	sort(arr , arr + n );
	int dem = 0 ; 
	for(int i = 1 ; i < n  ; i++){
		if(arr[i ] - arr[i -1] != 1){
			dem+= arr[i] - arr[i-1]-1;
		}
	}
	cout << dem;
	/*Giải thích công thức dem += arr[i] - arr[i - 1] - 1;
	arr[i] - arr[i - 1]: Đây là phép tính cho biết
	có bao nhiêu số nguyên dương nằm giữa arr[i - 1] và arr[i]. 
	Ví dụ:
	Nếu arr[i - 1] = 4 và arr[i] = 6, thì arr[i] - arr[i - 1] = 6 - 4 = 2, 
	điều này có nghĩa là có 2 số (5) nằm giữa 4 và 6.*/
}