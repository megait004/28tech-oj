#include<iostream>
using namespace std;
int main(){
	char c ;
	cin >> c ;
	if( c == 'u'|| c == 'U') {
		cout << "U";
	}
	else if( c == 'e'|| c == 'E'){
		cout << "E";
	}
	else if( c == 'o'|| c == 'O'){
		cout << "O";
	}
	else if( c == 'a'|| c == 'A'){
		cout << "A";
	}
	else if( c == 'i'|| c == 'I'){
		cout << "I";
	}
	else{
		c = (int )c;
		cout << (int)c ; 
	}
}
