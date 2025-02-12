#include <bits/stdc++.h>
using namespace std;

void ltor(long long n){
    if(n != 0){
        ltor(n / 10);
        cout << n % 10 << ' ';
    }
}

void rtol(long long n){
    if(n != 0){
        cout << n % 10 << ' ';
        rtol(n / 10);
    }
}

int main(){
    long long n; cin >> n;
    ltor(n);
    cout << endl;
    rtol(n);
}