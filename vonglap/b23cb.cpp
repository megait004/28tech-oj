#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;  // Input the number n

    // First loop: print all even divisors of n
    for(int i = 1; i <= n; i++){
        // Check if 'i' is even and a divisor of n
        if(i % 2 == 0 && n % i == 0 ){
            cout << i << " ";  // Print the even divisor
        }
    }
    cout << endl;  

    // Second loop: print all odd divisors of n, in reverse order
    for(int i = n; i >= 1; i--){
        // Check if 'i' is odd and a divisor of n
        if(i % 2 == 1 && n % i == 0){
            cout << i << " ";  // Print the odd divisor
        }
    }
}
