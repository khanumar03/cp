#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

ll const N = 1000000001;
vi<ll> coins{15, 10, 6, 3, 1};
vi<ll> dp(N, -1);

void compute()
{
    for (ll i = 1; i < N; i++)
    {
        for (ll j = coins.size() - 1; j >= 0; j--)
        {
            if (i - coins[j] >= 0)
            {
                dp[i] = min(dp[i] == -1 ? __LONG_LONG_MAX__ : dp[i], 1 + (dp[i - coins[j]] == -1 ? 0 : dp[i - coins[j]]));
            }
        }
    }
}

// void solve()
// {
//     ll n;
//     cin >> n;
// }

int main()
{
    int t;
    compute();
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    // cout << dp[2];
    cout << dp[1000000];
}