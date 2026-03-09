#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;


int main() {
    int n;
    int s;

    cin >> n >> s;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0;
    int x = 0;
    int result = INT_MAX;

    for(int r = 0; r < n; r++) {
        x += a[r];
        while(x - a[l] >= s) {
            x -= a[l];
            l++;
        }

        if (x >= s) {
            result = min(result, r - l + 1);
        }
    }
    if (result == INT_MAX){
        return -1;
    }

    cout << result << endl;

    return 0;
}
