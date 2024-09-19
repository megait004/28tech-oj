#include <iostream>
using namespace std;
int main()
{
  int n;
  int chan = 0;
  int le = 0;
  // bài này không có đầu vào cụ thể nên là dùng vòng lặp để đọc file 
  while (cin >> n)
  {// kiểm tra khi n nhập vào là chăn 
    if (n % 2 == 0)
    {
      chan++;
    }
    // kiểm tra khi n là lẻ 
    else if (n % 2 != 0)
    {
      le++;
    }
  }
  // kiểm tra điều kiện của bài toán để in ra chẵn lẻ 
  if (chan > le)
  {
    cout << "CHAN";
  }
  else if (le > chan)
  {
    cout << "LE";
  }
  else
    cout << "CHANLE";
  return 0;
}