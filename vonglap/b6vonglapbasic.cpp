#include <iostream>
#include <cmath> // Thư viện để sử dụng hàm abs

int main() {
    long long N;
    std::cin >> N;
    long long previous_digit = N % 10; // Lấy chữ số cuối cùng
    N /= 10; // Loại bỏ chữ số cuối
    long long total_difference = 0;
    while (N > 0) {
        long long current_digit = N % 10; // Lấy chữ số kế tiếp
        total_difference += std::abs(current_digit - previous_digit); // Tính chênh lệch và cộng dồn
        previous_digit = current_digit; // Cập nhật chữ số trước
        N /= 10; // Loại bỏ chữ số đã xử lý
    }

    std::cout << total_difference ;

    return 0;
}
