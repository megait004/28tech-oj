#include<iostream>
#include<string>
#include<map>
#include<iomanip>
using namespace std;

// Hàm tính điểm trung bình dựa trên tổng điểm và tổng tín chỉ
double diemtb(pair<int,int> a){
	return (double)a.first / a.second;
}

int main(){
	map<string,pair<int,int>> mp;
	string ten; 
	int tinChi, diem;
	
	// Nhập dữ liệu cho từng môn học: tên môn, tín chỉ, điểm
	while(cin >> ten >> tinChi >> diem){
		// Cập nhật tổng điểm và tổng tín chỉ của từng môn
		mp[ten].first += (tinChi * diem);
		mp[ten].second += tinChi;
	}
	
	// Xuất kết quả với tên môn học và điểm trung bình tương ứng
	for(auto it = mp.rbegin(); it != mp.rend(); it++){
		cout << it->first << " : " << setprecision(2) << fixed << diemtb(it->second) << endl;
	}
	return 0;
}
