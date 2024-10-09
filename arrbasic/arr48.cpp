#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool isPrime(int n){
    // Nếu n nhỏ hơn 2 thì không phải là số nguyên tố
	if(n < 2 ) return false;

    // Kiểm tra các ước từ 2 đến sqrt(n)
    // Nếu tìm thấy bất kỳ số nào chia hết cho n, thì n không phải là số nguyên tố
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0 ){
			return false;
		}
	}
	// Nếu không tìm thấy ước số nào, thì n là số nguyên tố
	return true;
}

int main(){
	int n;
	cin >> n;  

	int arr[n + 1];  // Khai báo mảng arr có kích thước n+1 (do thêm phần tử phụ cuối)
	for(int i = 0; i < n; i++){
		cin >> arr[i];  // Nhập các phần tử của mảng
	}

	arr[n] = 1;  // Thêm một phần tử 1 vào cuối mảng để xử lý trường hợp dãy con kết thúc tại cuối mảng
	n++;  // Tăng n lên 1 để tính cả phần tử mới thêm vào

	int dem = 0;        // Biến đếm số lượng số nguyên tố liên tiếp
	int sum = 0;        // Tổng các số nguyên tố liên tiếp
	int ans = 0;        // Độ dài lớn nhất của dãy số nguyên tố liên tiếp
	int sum_max = 0;    // Tổng lớn nhất của dãy số nguyên tố liên tiếp có độ dài bằng ans
	int index = -1;     // Vị trí kết thúc của dãy số nguyên tố liên tiếp dài nhất

	// Duyệt qua từng phần tử trong mảng
	for(int i = 0; i < n; i++){
		// Kiểm tra nếu arr[i] là số nguyên tố
		if(isPrime(arr[i])){
			dem++;  // Tăng số lượng số nguyên tố liên tiếp
			sum = sum + arr[i];  // Cộng giá trị của số nguyên tố vào tổng
		}
		else {
			// Nếu số lượng số nguyên tố liên tiếp lớn hơn kỷ lục hiện tại
			if(dem > ans){
				ans = dem;        // Cập nhật độ dài lớn nhất
				sum_max = sum;    // Cập nhật tổng lớn nhất của dãy con
				index = i - 1;    // Cập nhật vị trí kết thúc của dãy con
			}
			// Nếu số lượng số nguyên tố liên tiếp bằng kỷ lục hiện tại nhưng tổng lớn hơn
			else if(dem == ans && sum > sum_max){
				sum_max = sum;    // Cập nhật tổng lớn nhất
				index = i - 1;    // Cập nhật vị trí kết thúc của dãy con
			}
			// Reset lại biến đếm và tổng để xét dãy con mới
			dem = 0;
			sum = 0;
		}
	}

	// Nếu không tìm thấy dãy con nào, in ra "NOT FOUND"
	if(index == -1){
		cout << "NOT FOUND";
	}
	else {
		// In ra độ dài của dãy con nguyên tố liên tiếp dài nhất
		cout << ans << endl;
		// In ra các phần tử của dãy con
		for(int i = index - ans + 1; i <= index; i++){
			cout << arr[i] << " ";
		}
	}
}
