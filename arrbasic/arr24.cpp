#include <iostream>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // duyệt for đến n - k vì mình cần cộng đến k chỉ số
  // vi dụ ; 1 2 3 4 5 , k = 2 thì duyệt n - k ở đây n = 4 thì duyệt đến n - k = 4 - k , ví dụ k = 2 thì n - k = 2 ;
  for (int i = 0; i <= n - k; i++)
  { // mỗi lần lặp reset lại biến sum
    long long sum = 0;
    // duyệt vòng lặp con j để tính tổng các phần tử ở chỉ số j đến i + k - 1
    for (int j = i; j <= i + k - 1; j++)
    {
      sum = sum + arr[j];
    }
    cout << sum << " ";
  }
}