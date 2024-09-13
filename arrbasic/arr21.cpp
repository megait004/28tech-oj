#include<iostream>
using namespace std;
// muốn chèn ta phải khai báo mảng có kích thước to hơn giới hạn đề bài cho
int arr[10001];
int main(){
	int n ;cin >> n ;
	int x , k ;
	cin >> x >> k;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// vì k bắt đầu từ 1 nên vị trí thứ k phải giảm đi 1 vì chỉ số index của mảng bắt đầu từ 0
	k = k - 1;
	// Dịch các phần tử từ chỉ số K tới chỉ số N - 1 trong mảng sang phải 1 phần tử, việc dịch sẽ được thực hiện từ phải sang trái. 
	 for(int i = n - 1; i >= k; i--){
        arr[i + 1] = arr[i];
    }
    arr[k] = x;
    ++n;
	for(int i = 0 ; i < n ; i++){
		cout << arr[i] << " ";
	}
	return 0;
}