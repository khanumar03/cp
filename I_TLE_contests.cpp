#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

int n;
int l;
int r;
int x;
ll res = 0;

void solve(int idx, int m, ll mn, ll mx, ll sum, vi<ll> &nums)
{
    if (m >= 2 && sum >= l && sum <= r && mx - mn >= x)
        res++;
    if (idx >= nums.size())
    {
        return;
    }

    for (int i = idx; i < nums.size(); i++)
    {
        solve(i + 1, m + 1, min(mn, nums[i]), max(mx, nums[i]), sum + nums[i], nums);
    }
}

int main()
{
    cin >> n >> l >> r >> x;
    vi<ll> v(n);
    for (auto &num : v)
        cin >> num;

    solve(0, 0, 1e9, 0, 0, v);

    cout << res << endl;
}
