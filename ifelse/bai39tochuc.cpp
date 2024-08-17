#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int minVal = min({a, b, c});
    int maxVal = max({a, b, c});
    int midVal = a + b + c - minVal - maxVal; //midVal là giá trị còn lại (giá trị trung bình) được tính bằng tổng của cả ba số trừ đi giá trị nhỏ nhất và giá trị lớn nhất.
    
    cout << minVal << " " << midVal << " " << maxVal;
    
    return 0;
}
