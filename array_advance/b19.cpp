#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_map<int, int> lastIndex;
    int maxLength = 0, start = 0, maxStart = 0;
    long long maxSum = 0, currentSum = 0;
    
    for (int end = 0; end < N; end++) {
        if (lastIndex.count(A[end]) && lastIndex[A[end]] >= start) {
            start = lastIndex[A[end]] + 1;
            currentSum = 0;
            for (int i = start; i <= end; i++) {
                currentSum += A[i];
            }
        } else {
            currentSum += A[end];
        }
        lastIndex[A[end]] = end;
        
        if (end - start + 1 > maxLength || (end - start + 1 == maxLength && currentSum > maxSum)) {
            maxLength = end - start + 1;
            maxSum = currentSum;
            maxStart = start;
        }
    }
    
    cout << maxLength << "\n";
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}
