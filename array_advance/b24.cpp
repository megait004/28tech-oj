#include<iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = -1, last = -1;

    // Tìm vị trí xuất hiện đầu tiên
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            first = i + 1;  // Vị trí đầu tiên (chú ý là in ra từ 1, không phải 0)
            break;
        }
    }

    // Tìm vị trí xuất hiện cuối cùng
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == x) {
            last = i + 1;  // Vị trí cuối cùng
            break;
        }
    }


    if(first == -1) {
        cout << -1 << " " << -1;
    } else {
        cout << first << " " << last;
    }

    return 0;
}
