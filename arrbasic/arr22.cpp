#include<iostream>
using namespace std;
int main(){
	int n ;cin >> n ;
	int x ; cin >> x;
	int arr[n]; 
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	// tạo biến chỉ số để lưu chỉ số đầu tiên của thằng x đã xuất hiện
	int chiso = - 1;
	bool check = false;
	for(int i = 0 ; i  < n ; i++){
		if(x == arr[i]){
			check = true;
			chiso = i;
			break;
		}
	}
	// nếu sau vòng for nó biến check = true nghĩa là nó thấy phần tử đó thì :
	if(check == true){
		// dịch các phần tử phía sau lên 1 vị trí
		for(int i = chiso  ; i < n - 1 ; i++){
			arr[i] = arr[i + 1];
		}
		n = n - 1; // giảm kích thước của mảng
		// in ra mảng đã xoá
		for(int i = 0 ; i < n ; i++){
			cout << arr[i] << " ";
		}
	}
	else if( check == false){
		cout << "NOT FOUND";
	}
	return 0;
}