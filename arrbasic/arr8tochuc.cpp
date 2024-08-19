#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
	}
	cout << arr[0] << " ";
	int max = arr[0];
	// gán phần tử đầu tiên là max vì phần tử đầu tiên luôn đúng 
	// sau đó duyệt các phần tử còn lại trong mảng nếu mà lớn hơn max thì in ra 
	// sau đó gán lại phần tử đó là max;
 	for(int i = 0 ; i < n ; i++){
 		if(arr[i] >  max){
 			cout << arr[i] << " ";
			 max = arr[i]; 
		 }
		 
	 }
    return 0;
}
