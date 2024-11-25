#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n][n], transposed[n][n];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Chuyển vị ma trận (hoán đổi hàng và cột)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    
    // Sắp xếp các hàng của ma trận chuyển vị (tương ứng với cột trong ma trận ban đầu)
    for(int i = 0; i < n; i++) {
        sort(transposed[i], transposed[i] + n);
    }
    
    // In lại ma trận theo cột của ma trận chuyển vị (tức là in theo hàng trong ma trận chuyển vị)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << transposed[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
