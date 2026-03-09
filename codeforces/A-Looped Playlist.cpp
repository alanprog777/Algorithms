#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    long long p;

    cin >> n >> p;

    vector<long long> nums(n, 0);

    long long loopSum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        loopSum += nums[i];
    }

    long long sum = (p / loopSum) * loopSum;
    int lres = 0;
    long long res = LONG_LONG_MAX;
    long long r = (p / loopSum) * n;

    for(int l = 0; l < n; ++l) {

        while(p > sum) {
            sum += nums[r % n];
            ++r;
        }

        if (res > r - l) {
            res = r - l;
            lres = l;
        }

        sum -= nums[l];
    }

    cout << lres + 1 << " " << res << endl;
    return 0;
}
