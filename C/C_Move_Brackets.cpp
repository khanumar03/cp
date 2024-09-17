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
using vec = vector<T>;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int ans = 0;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            f++;
        else
            f--;
        if (f < 0)
        {
            ans++;
            f = 0;
        }
    }
    cout << ans << endl;
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