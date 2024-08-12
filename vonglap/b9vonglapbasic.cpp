#include<iostream>
#include<cmath>
using namespace std;
bool check(long long n){
	long long demc; // biến đếm số chẵn
	long long deml; // biến đếm số lẻ
	demc = 0 ; 
	deml = 0;
	long long dv;
	if(n == 0){ // check nếu n = 0 thì in ra true luôn vì 0 được coi là số chẵn
		return true;
	}while(n!=0){ // nếu n khác 0 hoặc n là số âm 
		dv = n % 10;
		if(dv % 2 == 0){
			demc++;
		}
		else if(dv % 2 == 1){
			deml++;
		}
		n = n /10;
	}
	if(deml < demc){ // chỉ khi mà số lượng số lẻ < số lượng số chẵn thì mới trả về true
		return true;
	}
	else if(deml >= demc){ // số lẻ lơn hơn số chẵn hay bằng đều là false
		return false;
	}
	else{
		return false;
	}
	
}
int main(){
	long long n ;
	cin >> n;
	if(check(abs(n)) == true){ // số âm hay số dương thì chuyển về số dương hết dùng hàm abs();
		cout << "28tech";
	}
	else {
		cout << "29tech";
	}
}