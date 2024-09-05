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
    cin >> n;
    vec<int> chips(n);
    int s = -1;
    int e = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> chips[i];

        if (chips[i] == 1)
        {
            if (s == -1)
                s = i;
            e = i;
        }
    }

    int ans = 0;

    for (int i = s + 1; i < e; i++)
    {
        if (chips[i] == 0)
            ans++;
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