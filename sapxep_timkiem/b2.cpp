#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

// Hàm so sánh giá trị tuyệt đối
bool compare(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    int N;
    cin >> N; 
    vector<int> A(N);

    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Sử dụng stable_sort với hàm so sánh trị tuyệt đối
    stable_sort(A.begin(), A.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
