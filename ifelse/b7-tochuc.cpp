//# [Kiểu dữ liệu-if else]. Bài 7. Số lớn nhất và nhỏ nhất
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int kq;
	kq = (a / b) * b ;
/*
	giải thích vì a chia b
	thì ta được phần nguyên
	và lúc này lấy phần nguyên
	nhân lại cho b thì ta được 
	số lớn nhất chia hết cho số b
	mà nhỏ hơn hoặc bằng a;

*/
	cout << kq << endl;
/*
	giải thích trường hợp này vì nếu mà thằng a chia hết cho b thì thằng
	a sẽ là thằng chia hết cho b lớn nhất vì đầu vào thằng a > b
	còn nếu không thì ta sẽ lấy a / b được phần nguyên cộng 
	thêm 1 rồi nhân cho số b để được thằng nhỏ nhất chia hết cho b
	và lớn hơn a
*/ 
	if(a % b == 0) {
		cout << a << endl;
	}
	else{
		cout <<(a/b+1)*b;
	}
	return 0;
}
