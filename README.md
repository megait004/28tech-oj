# http://oj.28tech.com.vn/organization/6-lp-trinh-c-nang-cao/problems/
# chú ý
  - để nhập có khoảng trắng thì ta không dùng cin mà thay bằng
  - fgets(tên biến , sizeof(tên biến)+1, stdin);
  - Hàm ceil : làm tròn lên số nguyên gần nhất,
  -  floor : làm tròn xuống số nguyên gần nhất,
  -  round : làm tròn số nguyên phụ thuộc vào phần thập phân.
# Công Thức Đồng Dư :

  - (A + B) % C = ((A % C) + (B % C)) % C
  - (A - B) % C = ((A % C) - (B % C)) % C
  - (A * B) % C = ((A % C) * (B % C)) % C
  - (A / B) % C = ((A % C) * (B-1 % C)) % C
# Công thức ECULID -EULER tìm số hoàn hảo
  - Nếu p là số nguyên tố và 2p - 1 cũng là số nguyên tố thì : 2p-1 * (2p - 1) sẽ là một số hoàn hảo.

  - Ví dụ :

  - p = 2 là số nguyên tố, và 22 - 1 cũng là số nguyên tố nên : 22-1 * (22 - 1) = 6 là số hoàn hảo

  - p = 3 là số nguyên tố, và 23 - 1 cũng là số nguyên tố nên : 23-1 * (23 - 1) = 4 * 7 = 28 là số hoàn hảo
# Công thức tìm sô nhỏ nhất có n chữ số và số lớn nhất có n chữ số
  -  pow(10,n-1); // số nhỏ nhất có n chữ số
  -  pow(10,n) - 1; // so lon nhat co n chu so
  -  ((a + b - 1) / b) * b ; // số nhỏ nhất >= a , và chia hết cho b
# Công thức Lũy Thừa Nhị Phân Sử Dụng Đệ Quy
  -  Ở đây bài toán con nhỏ nhất khi n = 0 thì thì ta có an = 1

  -  Ngược lại bạn có thể tính an thông qua an/2 ,
  -  nếu n chẵn thì an = an/2 * an/2 ví dụ 210 = 25 * 25.
  -  Nếu n lẻ thì an = an/2 * an/2 * a ví dụ 210 = 25 * 25*21
# Các hàm vector
  - Với vector V bạn có thể dùng hàm "max_element" để tìm phần tử lớn nhất, "min_element" để tìm phần tử nhỏ nhất, "accumulate" để tính tổng.
~~~
cout << *max_element(v.begin(), v.end());
cout << *min_element(v.begin(), v.end());
cout << accumulate(v.begin(), v.end(), 0);
~~~
