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
    vec<int> a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        a.push_back(e);
    }

    sort(a.begin(), a.end());
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum += a[i] - a[i - 1];
    }
    cout << sum << endl;
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