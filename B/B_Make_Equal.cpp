#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

#define el "\n";

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

void solve()
{
    int n;
    cin >> n;
    vi<ll> arr(n, 0);

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += (0ll + arr[i]);
    }

    sum /= (ll)n;

    ll extra = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum)
        {
            extra += (arr[i] - sum);
        }
        else
        {
            if (arr[i] + extra >= sum)
            {
                extra -= (sum - arr[i]);
            }
            else
            {
                cout << "NO" << el;
                return;
            }
        }
    }

    cout << "YES" << el;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}