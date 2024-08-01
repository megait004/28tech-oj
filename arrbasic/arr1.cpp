
//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn, bao nhiêu số lẻ, tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.
//Đầu vào
//Dòng đầu tiên là số nguyên dương N
//Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
//Giới hạn
//1<=N<=1000
//-10^3<=A[i]<=10^3
//Đầu ra
//Dòng đầu tiên in ra số lượng số chắn.
//Dòng thứ 2 in ra số lượng số lẻ.
//Dòng thứ 3 in ra tổng các số chẵn.
//Dòng thứ 4 in ra tổng các số lẻ.
#include<iostream>
using namespace std;
int main(){
	int n;// độ rộng của mảng
	cout << " moi nhap vao do rong cua mang : ";
	cin >> n;
	int A[n];
    int dem ,sum ;// cho gia trị chẵn 
	 dem = 0;
	 sum = 0;
	int dem1 ,sum1;// cho giá trị lẻ 
	 dem1 = 0;
	 sum1 = 0;
	 
	 
	//1.nhap gia tri cho mang
	cout << "moi nhap vao ptu cua mang" << endl ;
	for(int i=0;i<sizeof(A)/sizeof(int);i++){
		cin >> A[i];
	}
	
	
	// 2. in ra số lượng chẵn và tính tổng chẵn 
	
	cout << " gia tri chan la :" << " ";
	for(int i =0;i<sizeof(A)/sizeof(int);i++){
		if(A[i]%2==0){
		cout  << A[i] << " " ;
			dem =dem+1;
			sum =sum+A[i];
		
		}
	
	}
	cout << endl;
	// 3 .in ra số lượng lẻ và tính tổng lẻ 
	cout << " gia tri le la :" << " ";
	for(int i =0;i<sizeof(A)/sizeof(int);i++){
		if(A[i]%2!=0){
			cout  << A[i] << " " ;
			dem1 =dem1+1;
			sum1=sum1+A[i];
		
		}
	}
		cout << endl;

		cout << "so luong so chan la: " <<  dem << endl;
		cout << "tong cua so chan la: " <<sum << endl;
		cout << "so luong so le la : " << dem1<< endl;
		cout << "tong cua so le la : " <<sum1<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}