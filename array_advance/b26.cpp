#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long total_increments = 0;
    
    for (int i = 1; i < N; i++) {
        if (A[i] <= A[i-1]) {
            total_increments += (A[i-1] + 1 - A[i]);
            A[i] = A[i-1] + 1;
        }
    }
    
    cout << total_increments << endl;
    return 0;
}
