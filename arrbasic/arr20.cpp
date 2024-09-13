#include<iostream>
using namespace std;
int main(){
	// lớn hơn liền kề là 1 phần tử thoả mãn khi nó lớn hơn cả số đừng trước và số đứng sau nó 
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// kiểm tra giá trị đầu tiên và giá trị cuối cùng nó luôn sai vì nó không có cả hai số đừng trước và sau 
	for(int i = 0 ; i < n ; i++){
		if(i == 0 || i == n - 1){
			continue;
		}
		// kiểm tra điều kiện
		else if(arr[i] > arr[i +1] && arr[i] > arr[i - 1] ){
			cout << arr[i] << " ";
		}
	}
	return 0;
}