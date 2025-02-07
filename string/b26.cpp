#include <bits/stdc++.h>
using namespace std;

bool kiemTradigit(string &s){
    return all_of(s.begin(), s.end(), ::isdigit);
}

bool chanLe(string &s){
    return (s[0] - '0') % 2 == (s[s.size() - 1] - '0') % 2;
}

bool chenhLech(string &s){
    for (int i = 0; i < s.size() - 1; i++){
        if (abs((s[i] - '0') - (s[i + 1] - '0')) == 3)
            return false;
    }
    return true;
}

bool twoEight(string &s){
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == '2' && s[i + 1] == '8')
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (kiemTradigit(s) && chenhLech(s) && chanLe(s) && twoEight(s)){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
