#include<iostream>// bài tập tìm số lớn nhất nhỏ nhất sử dụng thư viện algorithm và hàm max,min.
#include<math.h>
#include <algorithm>
using namespace std;
int main (){
	unsigned short  x,y,z,t;
	cin >> x >> y >> z >> t;
	cout << max({x,y}) << endl;
	cout << min({z,t}) << endl;
	cout << max({x,y,z}) << endl;
	cout << min({x,y,z,t});
}
