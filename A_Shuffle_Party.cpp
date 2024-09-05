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

ll divisor(ll n)
{
    ll d = 1;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d = i;
            if (n / i != i)
            {
                d = n / i;
            }
        }
    }
    return d;
}

void solve()
{
    ll n = 120240229;
    // cin >> n;
    vi<ll> arr(n + 1);
    arr[1] = 1;
    int res = 1;

    for (ll i = 2; i <= n; i++)
    {
        arr[i] = i;
        swap(arr[divisor(i)], arr[i]);
        if (arr[i] == 1)
        {
            res = i;
        }
    }

    cout << res << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}