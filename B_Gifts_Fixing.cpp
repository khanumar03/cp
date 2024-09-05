#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

template <typename T>
T ri(T &input) { cin >> input; };

template <typename T>
T log(T output) { cout << output; };

int solve()
{
    vec<ll> a;
    vec<ll> b;
    int g;
    ll ans = 0;
    ri(g);
    ll amin = INT32_MAX;
    ll bmin = INT32_MAX;

    for (int i = 0; i < g; i++)
    {
        ll c;
        ri(c);
        amin = min(amin, c);
        a.push_back(c);
    }

    for (int i = 0; i < g; i++)
    {
        ll o;
        ri(o);
        bmin = min(bmin, o);
        b.push_back(o);
    }

    for (int i = 0; i < g; i++)
    {
        ans += max(a[i] - amin, b[i] - bmin);
    }
    log(ans);
    log("\n");
}

int main()
{
    int n;
    ri(n);

    while (n--)
        solve();
}