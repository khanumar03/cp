#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define SORT(x) sort(x.begin(), x.end());

typedef long long ll;

template <typename T>
using vi = vector<T>;

void solve()
{
    int n;
    cin >> n;
    vi<ll> arr;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        st.insert(t);
    }

    for (auto ss : st)
        arr.push_back(ss);

    ll res = 1;
    for (ll i = 0; i < arr.size(); i++)
    {
        auto p = lower_bound(arr.begin(), arr.end(), arr[i] + n);
        res = max(res, p - arr.begin() - i);
    }
    cout << res << endl;
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