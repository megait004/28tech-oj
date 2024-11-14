#include<iostream>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int maxn = -1e9;
    int minn = 1e9;

    // Tìm giá trị nhỏ nhất và lớn nhất
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] > maxn) {
                maxn = arr[i][j];
            }
            if(arr[i][j] < minn) {
                minn = arr[i][j];
            }
        }
    }

    // In giá trị nhỏ nhất và vị trí của nó
    cout << minn << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == minn){
                cout << i + 1 << " " << j + 1 << endl; // cộng thêm 1 để chuyển về chỉ số 1-based
            }
        }
    }

    // In giá trị lớn nhất và vị trí của nó
    cout << maxn << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == maxn){
                cout << i + 1 << " " << j + 1 << endl; // cộng thêm 1 để chuyển về chỉ số 1-based
            }
        }
    }

    return 0;
}
