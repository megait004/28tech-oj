#include<iostream>
#include<set>
using namespace std;

int main(){
    string s; 
    set<string> se;
    
    // Đọc đầu vào cho đến khi hết dữ liệu (có thể nhập từ bàn phím hoặc file)
    while(cin >> s){
        se.insert(s); // Thêm chuỗi vào set, set sẽ tự động loại bỏ phần tử trùng lặp
    }
    
    // In kích thước của set (số lượng chuỗi duy nhất trong set)
    cout << se.size();
    cout << endl;
    
    // Khai báo iterators để duyệt set
    auto it = se.begin(); // Iterator trỏ đến phần tử đầu tiên
    auto it1 = se.end();   // Iterator trỏ đến phần tử cuối cùng (không hợp lệ)
    it1--; // Di chuyển iterator it1 về phần tử cuối cùng hợp lệ
    
    // In ra phần tử đầu tiên và cuối cùng của set
    cout << *it << " " << *it1;
    
    return 0;
}
