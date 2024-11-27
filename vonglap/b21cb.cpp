#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;  

    int sum = 0;  // Initialize the sum of divisors to 0

    // Loop through all integers from 1 to n
    for(int i = 1; i <= n; i++){
        // Check if 'i' is a divisor of n
        if(n % i == 0){
            sum = sum + i;  // Add the divisor to the sum
        }
    }

    cout << sum;  
    return 0;  
}
