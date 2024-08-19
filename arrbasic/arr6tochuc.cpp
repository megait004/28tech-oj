#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// tinhs tích của 2 số đừng cạnh nhau
	// sẽ là : tích đó sẽ bằng cho phần tử thứ i nhân phần tử thứ i  + 1
	// nó sẽ có 1 lỗi : là phần tử cuối cùng cũng như là index = n - 1 
	// ví dụ n = 5 thì index cuối bằng 4 thì lúc này giá trị của index bằng 4 nó sẽ không biết thằng nào đăng sau để nhân nên nó sẽ 
	//ra số 0 thế nên khi mà giá trị index = với n - 1 thì ta sẽ dừng vòng lặp để nó không in ra số 0 
	int tich = 1 ;
	for(int i = 0 ;i < n ; i++){
		tich = arr[i] * arr[i +1 ]; 
		if(i == n - 1){
			break;
		}
		cout << tich << " ";
		
	}
	return 0;
	
}