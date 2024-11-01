#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int min_distance = INT_MAX;
    int count = 0;

    for (int i = 0; i < n - 1; ++i) {
        int distance = v[i + 1] - v[i];
        if (distance < min_distance) {
            min_distance = distance;
            count = 1;
        } else if (distance == min_distance) {
            ++count;
        }
    }

     cout << min_distance << " " << count <<  endl;
    return 0;
}
