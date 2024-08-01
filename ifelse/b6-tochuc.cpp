#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 1. N có phải là số chẵn? 
    if (n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 2.N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? 
    if (n % 3 == 0 && n % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 3. N có phải là số chia hết 3 nhưng không chia hết cho 7?
    if (n % 3 == 0 && n % 7 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 4. N có phải là số chia hết cho 3 hoặc 7? 
    if (n % 3 == 0 || n % 7 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 5. N là số lớn hơn 30 và nhỏ hơn 50? 
    if (n > 30 && n < 50) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5?
    
    if (n >= 30 && (n % 2 == 0 || n % 3 == 0 ||n % 5 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? // Kiểm tra n nằm trong đoạn [10, 99], kiểm tra chữ số hàng đơn vị là 2, 3, 5 hoặc 7
    
    if (10 <= n && n <= 99 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 8. N có phải là số không vượt quá 100 và chia hết cho 23?
    if (n <= 100 && n % 23 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 9. N không thuộc đoạn [10, 20]?
    if (n < 10 || n > 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    // 10. N có chữ số tận cùng là bội số của 3?
    if (n % 10 == 0 || n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
