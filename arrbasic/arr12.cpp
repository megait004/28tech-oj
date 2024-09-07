#include<iostream>
using namespace std;
int main(){
	int n ; cin >> n ;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int maxs = -100001;
	int mins = 100001;
	// duyệt tìm min 
	for(int i = 0 ; i < n ;i++){
		if(arr[i] <= mins){
			mins = arr[i];
		}
	}
	// muốn in vị trí cuối cùng có giá trị bé nhất ta tạo biến tạm và để lưu giá trị i 
	// sau khi lưu các giá trị 'i' ta in biến tạm sau khi kết thúc vòng for
	int mini;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == mins){
			mini = i ;
		}
	}
	cout << mini;

	cout << " ";
	// duyệt tìm max
	for(int i = 0 ; i < n ; i++){
		if(arr[i] >= maxs){
			maxs = arr[i];
		}
	}
	// in ra vị trí của giá trị max ở vị trí đầu tiên thì gặp thằng nào đầu in xong break luôn
	for(int i = 0 ; i < n ; i++ ){
		if(maxs == arr[i]){
			cout << i ;
			break;
		}
	}
	return 0;
}