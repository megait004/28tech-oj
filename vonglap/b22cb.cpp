#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;  
    int sum = 0;  

    // Loop through all integers from 1 to n
    for(int i = 1; i <= n; i++){
        // Check if 'i' is an even number
        if(i % 2 == 0){
            // If 'i' is even and also a divisor of n, add it to the sum
            if(n % i == 0){
                sum = sum + i;  // Add the even divisor to the sum
            }
        }
    }
    cout << sum;  
    return 0;  
}
