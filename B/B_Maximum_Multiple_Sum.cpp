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
    int n;
    cin >> n;
    int ans = 0;
    int prevmax = 0;

    for (int i = 2; i <= n; i++)
    {
        int sum = 0;
        int j = 1;

        while (i * j <= n)
            sum += i * j++;

        if (prevmax < sum)
        {
            prevmax = sum;
            ans = i;
        }
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}