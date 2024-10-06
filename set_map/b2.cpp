#include<iostream>
#include<set>
using namespace std;

int main(){
    // Đọc vào số lượng phần tử cần thêm vào tập hợp
    int n; 
    cin >> n;
    
    // Khai báo một tập hợp để lưu trữ các số nguyên duy nhất
    set<int> se;

    // Vòng lặp để đọc n số nguyên và thêm chúng vào tập hợp
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        se.insert(x);  // Thêm phần tử x vào tập hợp
    }

    // Đọc số lượng truy vấn cần thực hiện
    int q; 
    cin >> q;

    // Xử lý q truy vấn
    while(q--){
        int k; 
        cin >> k;

        // Kiểm tra xem phần tử k có nằm trong tập hợp hay không
        if(se.find(k) == se.end()){
            cout << "NO" << endl; // Không tìm thấy k trong tập hợp
        }
        else {
            cout << "YES" << endl; // Tìm thấy k trong tập hợp
        }
    }

    return 0; 
}
