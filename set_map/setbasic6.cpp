#include<iostream>
#include<string>  
#include<set>     
using namespace std;

int main(){
    int n; 
    cin >> n; 
    string s;
    set<string> se; // Khai báo một tập hợp để lưu các chuỗi khác nhau

    // Vòng lặp để nhập 'n' chuỗi và thêm vào tập hợp 'se'
    for(int i = 0; i < n; i++){
        cin >> s; // Nhập chuỗi
        se.insert(s); // Thêm chuỗi vào tập hợp
    }

    // In ra số lượng phần tử khác nhau trong tập hợp
    cout << se.size() << endl;

    // In ra các phần tử của tập hợp (tập hợp sẽ tự động sắp xếp theo thứ tự tăng dần)
    for(string x : se){
        cout << x << " "; // In ra từng phần tử
    }
}
