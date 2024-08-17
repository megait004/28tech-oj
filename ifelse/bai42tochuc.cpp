#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int w ;
	double h;
	cin >> w >> h;
	double bmi;
	h = h * 0.01;  // d?i chi?u cao sang met chia choa 100
	bmi = (double)w / (pow(h,2));
	if(bmi < 18.5){
		cout << "Under weight";
	}
	else if(bmi >= 18.5 && bmi <25){
		cout << "Normal";
	}
	else if(bmi >= 25 && bmi < 30){
		cout << "Over weight";
	}
	else if(bmi >= 30 && bmi < 35){
		cout << "Obesity 1";
	}
	else if(bmi >= 35 && bmi < 40){
		cout << " Obesity 2";
	}
	else if( bmi >= 40){
		cout << "Extreme obesity";
	}
}