#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string date;
    cin >> date; // Nhập vào chuỗi ngày sinh dạng d/m/yyyy
    
    stringstream ss(date);
    int day, month, year;
    char slash; // Biến để lưu dấu '/' khi đọc dữ liệu
    
    // Đọc giá trị ngày, tháng, năm từ chuỗi đầu vào
    ss >> day >> slash >> month >> slash >> year;
    
    // Xuất ngày sinh với định dạng dd/mm/yyyy (đảm bảo có 2 chữ số cho ngày và tháng)
    cout << setw(2) << setfill('0') << day << "/"
         << setw(2) << setfill('0') << month << "/"
         << year << endl;
    
    return 0;
}