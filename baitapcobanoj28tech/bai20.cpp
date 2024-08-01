#include<iostream>
#include<iomanip>
// bài này sử dụng thư viện iomanip và hàm setw(),setfill()
// -> hàm setw() setw là một hàm cho phép giới hạn độ rộng của một giá trị được xuất lên màn hình.
// -> setfill() là hàm thêm các kí tự còn thiếu cho đủ độ rộng
using namespace std;
int main(){
	unsigned int N;
	cin >> N ;
	cout << setw(6)<< setfill('0') << N<< endl;
	cout << setw(6) << setfill('#') << N;
}
