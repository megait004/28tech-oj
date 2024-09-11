#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; 
    cin >> n; // Nhập số nguyên dương N
    int m = n; // Sao chép giá trị của N cho biến m để xử lý cách 2
    int l = n; // Sao chép giá trị của N cho biến l để xử lý cách 3
    int ts = -1; // Biến lưu thừa số nguyên tố lớn nhất

    // Cách 1: In ra các thừa số nguyên tố khác nhau
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                if(i > ts) { // Nếu thừa số lớn hơn thừa số hiện tại, in ra
                    ts = i;
                    cout << ts << " ";
                }
                n = n / i; // Chia n cho thừa số nguyên tố i
            }
        }
    }
    if(n > 1) { // Nếu còn lại một thừa số nguyên tố lớn hơn 1
        ts = n;
        cout << ts; 
    }
    cout << endl;

    // Cách 2: In ra các thừa số nguyên tố kèm theo số mũ
    for(int i = 2; i <= sqrt(m); i++) {
        if(m % i == 0) {
            int dem = 0; // Biến đếm số lần xuất hiện của thừa số nguyên tố i
            while(m % i == 0) {
                dem++;
                m = m / i; // Chia m cho thừa số nguyên tố i
            }
            // In ra thừa số nguyên tố và số lần xuất hiện của nó
            cout << "(" << i << ", " << dem << ")" << " ";
        }
    }
    if(m > 1) { // Nếu còn lại một thừa số nguyên tố lớn hơn 1
        cout << "(" << m << ", " << 1 << ")";
    }
    cout << endl;

    // Cách 3: In ra các thừa số nguyên tố đầy đủ
    bool check = true; // Biến dùng để kiểm soát việc in dấu 'x' giữa các thừa số
    for(int i = 2; i <= sqrt(l); i++) {
        if(l % i == 0) {
            while(l % i == 0) {
                l = l / i; // Chia l cho thừa số nguyên tố i
                if (!check) 
                	cout << "x "; // In dấu 'x' giữa các thừa số
                cout << i << " ";
                check = false;
            }
        }
    }
    if(l > 1) { // Nếu còn lại một thừa số nguyên tố lớn hơn 1
        if(!check) 
        	cout << "x "; // In dấu 'x' trước thừa số cuối
        cout << l;
    }

    return 0;
}
