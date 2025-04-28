#include <bits/stdc++.h>
using namespace std;

string chuanHoaTen(string s) {
    string res = "";
    stringstream ss(s);
    string w;
    while (ss >> w) {
        res += toupper(w[0]);
        for (int i = 1; i < w.size(); i++) {
            res += tolower(w[i]);
        }
        res += " ";
    }
    res.pop_back(); 
    return res;
}

string chuanHoaNgaySinh(string ns) {
    stringstream ss(ns);
    string day, month, year;
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);

    if (day.size() == 1) day = "0" + day;
    if (month.size() == 1) month = "0" + month;

    return day + "/" + month + "/" + year;
}

int main() {
    string s;
    getline(cin, s);
    string ns;
    getline(cin, ns);

    cout << chuanHoaTen(s) << endl;
    cout << chuanHoaNgaySinh(ns) << endl;

    return 0;
}

