#include<iostream>
using namespace std;
void my_swap(int &a, int &b){
	int tmp;
	tmp = a;
	a = b ;
	b = tmp;
	cout << a  << " " << b;
}
int main(){
	int a , b ;
	cin >> a >> b ;
	my_swap(a,b);
	return 0;
}