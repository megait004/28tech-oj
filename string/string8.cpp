#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> uniqueChars;

    for (char c : s) {
        if (isalpha(c)) {  // Only consider alphabetic characters
            uniqueChars.insert(tolower(c));  // Convert to lowercase to ignore case
        }
    }
    // If the set has 26 unique characters, it's a pangram
    if (uniqueChars.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
