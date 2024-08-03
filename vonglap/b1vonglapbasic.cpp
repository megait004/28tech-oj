#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // In ra N dòng chữ "Hello 28tech"
    for (int i = 0; i < N; i++) {
        cout << "Hello 28tech" << endl;
    }

    // In ra các số nguyên từ 1 đến N
    for (int i = 1; i <= N; i++) {
        cout << i;
        if (i < N) cout << " ";
    }
    cout << endl;

    // In ra các số nguyên từ 0 đến N - 1
    for (int i = 0; i < N; i++) {
        cout << i;
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    // In ra các số nguyên từ N về 1
    for (int i = N; i > 0; i--) {
        cout << i;
        if (i > 1) cout << " ";
    }
    cout << endl;

    // In ra các số nguyên từ N - 1 về 0
    for (int i = N - 1; i >= 0; i--) {
        cout << i;
        if (i > 0) cout << " "; // chu y la them dk if cho mỗi vòng lặp để đảm bảo là nó không in thừa dấu cách sau mỗi lần lặp
    }
    cout << endl;

    return 0;
}
