#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    int s;

    cin >> n >> s;

    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int x = 0;
    int l = 0;
    int result = 0;

    for(int r = 0; r < n; r++) {
        x += a[r];
        while (x >= s){
            x -= a[l];
            l++;
        }
    result += l;
    }

    cout << result << endl;
    return 0;
}
