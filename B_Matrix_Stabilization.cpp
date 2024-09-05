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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi<vi<ll>> arr(n, vi<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ll t = i - 1 >= 0 ? arr[i - 1][j] : 0;
            ll b = i + 1 < n ? arr[i + 1][j] : 0;
            ll l = j - 1 >= 0 ? arr[i][j - 1] : 0;
            ll r = j + 1 < m ? arr[i][j + 1] : 0;

            if (arr[i][j] > t && arr[i][j] > b && arr[i][j] > l && arr[i][j] > r)
            {
                arr[i][j] = max({t, b, l, r});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}