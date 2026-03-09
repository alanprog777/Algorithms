#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long r;

    cin >> n >> r;

    vector<int> nums(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    long long res = 0;

    int right = 0;

    for (int l = 0; l < n; ++l) {
        while(right < n && nums[right] - nums[l] <= r) {
            ++right;
        }

        if (nums[right] - nums[l] <= r) {
            break;
        }

        res += n - right;
    }
    cout << res << endl;
    return 0;
}
