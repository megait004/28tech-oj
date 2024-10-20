#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count25 = 0, count50 = 0;  // Đếm số tờ 25 và 50 rúp hiện có

    for (int i = 0; i < n; i++) {
        if (arr[i] == 25) {
            count25++;  // Nếu người đó có tờ 25, không cần trả lại gì
        } else if (arr[i] == 50) {
            if (count25 > 0) {  // Cần một tờ 25 để trả lại
                count25--;
                count50++;  // Nhận một tờ 50 rúp
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else if (arr[i] == 100) {
            if (count50 > 0 && count25 > 0) {  // Trả lại bằng một tờ 50 và một tờ 25
                count50--;
                count25--;
            } else if (count25 >= 3) {  // Trả lại bằng 3 tờ 25
                count25 -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
