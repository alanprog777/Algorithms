#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    int s;

    std::cin >> n >> s;
    std::vector<int> a(n);

    for(int i = 0; i < n; i++) std::cin >> a[i];

    int l = 0;
    int x = 0;
    int res = 0;

    for(int r = 0; r < n; r++) {
        x += a[r];
        while (x > s) {
            x -= a[l];
            l++;
        }
        res = std::max(res, r - l + 1);
    }
    std::cout << res << std::endl;
}
