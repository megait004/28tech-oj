#include<iostream>
using namespace std;
bool so_tang(int n );
	bool so_tang(int n ){	
	/*Tạo một hàm nhận vào một số nguyên n.
	Dùng vòng lặp while (n >= 10) để tách từng chữ số của n.
	Ở mỗi bước,
 	kiểm tra nếu chữ số cuối cùng (n % 10) nhỏ hơn hoặc bằng chữ số kế trước nó (n / 10 % 10), 
 	thì trả về false.
	Nếu vòng lặp kết thúc mà không vi phạm điều kiện trên, trả về true.*/
    while (n >= 10) {
        if (n % 10 <= (n / 10) % 10) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(so_tang(i)){
            cout << i << " ";
        }
    }
    return 0;
}