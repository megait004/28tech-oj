#include <iostream>
using namespace std;
// khai báo 1 mảng đánh dấu đủ lớn
int danhdau[1000001];
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    // lấy mảng arr[i] làm chỉ số
    danhdau[arr[i]] = 1;
  }
  int dem = 0;
  // duyệt mảng đánh dấu nếu mà trong mảng có phần tử nào bằng 1 thì tăng biến đêm lên
  for (int i = 0; i <= 1000000; i++)
  {
    if (danhdau[i] == 1)
    {
      dem++;
    }
  }
  cout << dem;
}