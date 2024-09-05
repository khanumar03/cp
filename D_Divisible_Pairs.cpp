#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

void solve()
{

    int n, x, y;
    cin >> n >> x >> y;

    map<pair<int, int>, ll> m;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        res += m[{(x - k % x) % x, k % y}];
        m[{k % x, k % y}]++;
    }

    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}