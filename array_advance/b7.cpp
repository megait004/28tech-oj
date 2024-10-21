#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int main(){
    int n; 
    cin >> n; 
    int arr[n]; 
    vector<int> v2; 
    vector<int> v3; 

   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Phân loại các số vào hai vector: số lẻ và số chẵn
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1){ // Kiểm tra nếu số là lẻ
            v2.push_back(arr[i]); 
        }
        else {
            v3.push_back(arr[i]); 
        }
    }

    // Sắp xếp vector v2 (số lẻ) theo thứ tự giảm dần
    sort(v2.begin(), v2.end(), greater<int>()); 
    
    for(int i : v2){
        cout << i << " "; 
    }

    // Sắp xếp vector v3 (số chẵn) theo thứ tự tăng dần
    sort(v3.begin(), v3.end()); 
  
    for(int i2 : v3){
        cout << i2 << " ";
    }

    return 0; 
}