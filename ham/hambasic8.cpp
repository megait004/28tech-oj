#include<iostream>
using namespace std;
bool so_dep(int n);
bool so_dep(int n){
	int demle = 0 ;
	int demchan = 0;
	for(int i = 0 ; n > i ; (n = n /10)){
		if(n % 2 ==0 ){
			demchan ++;
		}
		else if(n % 2 !=0){
			demle++;
		}
	}
	if(demchan == demle){
		return true;
	}
	else
		return false;
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(so_dep(i)){
            cout << i << " ";
        }
    }
    return 0;
}