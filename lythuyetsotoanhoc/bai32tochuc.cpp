#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int dem = 0; // Biến đếm số thừa số nguyên tố
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){ // Chia hết cho i
            dem++;
            if(dem == k){  // Nếu đếm đến thừa số nguyên tố thứ k
                cout << i << endl; // In ra thừa số
                return 0; // Kết thúc chương trình
            }
            n /= i;
        }
    }

    // Nếu n lớn hơn 1, nghĩa là nó là một thừa số nguyên tố
    if(n > 1){
        dem++;
        if(dem == k){ // Nếu đó là thừa số nguyên tố thứ k
            cout << n << endl;
            return 0;
        }
    }

    // Nếu không tìm thấy thừa số nguyên tố thứ k
    cout << -1 << endl;
    return 0;
}
