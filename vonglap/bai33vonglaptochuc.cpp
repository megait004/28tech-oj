#include<iostream>
using namespace std;
int main(){// in tam giác cân
	int n ; cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1; j <= n -i;j++){
			cout << "  "; // vẫn là dòng thứ i có i ký tự nhưng mà sẽ là ký tự khoảng cách giống 
						// hình 3 của bài22 nhưng sẽ là 2 dấu cách
		}
		// duyệt tam giác bên trái chạy từ j đến < i nghĩa là i - 1
		for(int j =1 ; j < i ;j++){
			cout << "*" << " "; 
		}
		// duyệt nửa tam giác còn lại chạy từ j đến <= i ;		
		for(int j =1 ; j <= i ; j ++){
			cout << "*"  << " " ;
		}
	
		cout << endl;
	}
}