#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);
    multiset<int> se;

    // Nhập mảng và thêm vào multiset
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        se.insert(v[i]);
    }

    int q; 
    cin >> q;
    while(q--) {
        int tt; 
        cin >> tt;

        // Thao tác 1: Thêm phần tử x vào mảng
        if(tt == 1) { 
            int add; 
            cin >> add;
            se.insert(add);
        } 
        // Thao tác 2: Xóa 1 lần xuất hiện của phần tử x khỏi mảng nếu nó tồn tại
        else if(tt == 2) { 
            int x; 
            cin >> x;
            auto it = se.find(x);
            if(it != se.end()) {
                se.erase(it);
            }
        } 
        // Thao tác 3: Tìm phần tử >= x nhỏ nhất, in ra -1 nếu không có
        else if(tt == 3) { 
            int x; 
            cin >> x;
            auto it = se.lower_bound(x); // lower_bound tìm phần tử >= x
            if(it != se.end()) {
                cout << *it << endl;
            } else {
                cout << "-1" << endl;
            }
        } 
        // Thao tác 4: Tìm phần tử <= x lớn nhất, in ra -1 nếu không có
        else if(tt == 4) { 
            int x; 
            cin >> x;
            auto it = se.upper_bound(x); // upper_bound tìm phần tử > x
            if(it == se.begin()) {
                cout << "-1" << endl;
            } else {
                it--;
                cout << *it << endl;
            }
        }
    }
    return 0; 
}
