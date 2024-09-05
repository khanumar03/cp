#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <bitset>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

void tc()
{
    int n;
    cin >> n;
    vec<int64_t> nums(n, 0);
    int64_t mask = 1LL << 30;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    unordered_map<int64_t, int> m;

    for (int i = 0; i < n; i++)
    {
        m[(nums[i] & mask) ? 1 : 0]++;
    }
    int ans = 0;

    for (auto it : m)
    {
        ans = max(ans, it.second);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tc();
    }
}