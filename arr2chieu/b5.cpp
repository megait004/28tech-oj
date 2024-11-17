#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // In Pattern 1: Duyệt và in ma trận theo từng cột từ trên xuống
    cout << "Pattern 1:" << endl;
    for(int j = 0; j < n; j++){        // Duyệt từng cột
        for(int i = 0; i < n; i++){    // Duyệt các phần tử trong cột
            cout << arr[i][j] << " ";  // In phần tử của cột hiện tại
        }
        cout << endl;                  // Xuống dòng sau khi duyệt xong một cột
    }

    // In Pattern 2: Duyệt và in ma trận từ dưới lên, từ phải sang trái
    cout << "Pattern 2:" << endl;
    for(int i = n - 1; i >= 0; i--){       // Duyệt các hàng từ dưới lên
        for(int j = n - 1; j >= 0; j--){   // Duyệt các cột từ phải sang trái
            cout << arr[i][j] << " ";      // In phần tử tại vị trí [i][j]
        }
        cout << endl;                      // Xuống dòng sau khi duyệt xong một hàng
    }

    // In Pattern 3: Duyệt và in ma trận theo cột ngược, từ dưới lên
    cout << "Pattern 3:" << endl;
    for(int i = n - 1; i >= 0; i--){       // Duyệt từng cột từ cột cuối đến cột đầu
        for(int j = 0; j < n; j++){        // Duyệt các phần tử trong cột từ dưới lên
            cout << arr[j][i] << " ";      // In phần tử tại vị trí [j][i]
        }
        cout << endl;                      // Xuống dòng sau khi duyệt xong một cột
    }

    // In Pattern 4: Duyệt và in ma trận theo từng hàng, từ phải sang trái
    cout << "Pattern 4:" << endl;
    for(int i = 0; i < n; i++){            // Duyệt từng hàng từ trên xuống
        for(int j = n - 1; j >= 0; j--){   // Duyệt các phần tử trong hàng từ phải sang trái
            cout << arr[i][j] << " ";      // In phần tử tại vị trí [i][j]
        }
        cout << endl;                      // Xuống dòng sau khi duyệt xong một hàng
    }
}
