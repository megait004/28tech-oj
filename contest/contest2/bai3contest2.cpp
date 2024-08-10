#include <iostream>
using namespace std;

int main() {
    long long income; // Thu nhập của Tèo
    cin >> income;

    // Xác định thuế suất dựa vào bậc thuế
    int taxRate;
    if (income <= 5000000) {
        taxRate = 5;
    } else if (income <= 10000000) {
        taxRate = 10;
    } else if (income <= 18000000) {
        taxRate = 15;
    } else if (income <= 32000000) {
        taxRate = 20;
    } else if (income <= 52000000) {
        taxRate = 25;
    } else if (income <= 80000000) {
        taxRate = 30;
    } else {
        taxRate = 35;
    }

    // Tính thuế TNCN phải nộp
    long long taxAmount = income * taxRate / 100;

    // Tính thu nhập sau thuế
    long long afterTaxIncome = income - taxAmount;

    // In kết quả
    cout << "Thu nhap : " << afterTaxIncome << " VND" << endl;
    cout << "Thue : " << taxAmount << " VND" << endl;

    return 0;
}
