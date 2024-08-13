#include <iostream>
using namespace std;

int main() {
    long long  N;
    cin >> N;

    while (N >= 10) { 
        long long sum = 0;
        while (N > 0) {
            sum += N % 10; // tổng các chữ số của n
            N /= 10;
        }
        N = sum; // gán lại n = sum để kiểm tra tiếp n cho vòng while đầu tiên
    }

    cout <<  N ;
    return 0;
}
