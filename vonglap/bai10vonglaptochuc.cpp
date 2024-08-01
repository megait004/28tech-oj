//#[Vòng Lặp]. Bài 10. Kiểm tra số 2022 
#include<iostream>
using namespace std;
int main(){
	int n ;
	int sl ;
	cin >> n;
	int dem =0;
	for(int i =1;i <= n;i++ ){
		cin >> sl;
		if(sl == 2022){
			 dem = dem + 1;
		} 
		
	}
	if(dem >= 1 ) {
		cout << "YES";
	}
	else 
		cout << "NO";

		
	return 0;
}
