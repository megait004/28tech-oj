#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    set<int> se;

    // Nhập n phần tử vào tập hợp
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        se.insert(x);
    }

    // In ra số lượng phần tử khác nhau trong mảng
    cout << se.size() << endl;

    // Duyệt và in các phần tử theo thứ tự giảm dần
    //Dùng hàm rbegin() và rend() của set để duyệt từ cuối đến đầu.
    for(auto it = se.rbegin(); it != se.rend(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
