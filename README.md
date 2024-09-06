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