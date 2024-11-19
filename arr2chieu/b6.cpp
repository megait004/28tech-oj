#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; 
    cin >> n;  
    int arr[n][n]; 

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> arr[i][j];  
        }
    }

    // Hoán đổi các phần tử đối xứng qua đường chéo chính và đường chéo phụ
    for(int i = 0 ; i < n ; i++){
        swap(arr[i][i], arr[i][n - i - 1]);  // Hoán đổi phần tử ở vị trí (i, i) với (i, n - i - 1)
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j] << " ";  
        }
        cout << endl;  
    }

    return 0;  
}