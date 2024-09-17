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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ans = 0;
        vi<int> l(n, 0), r(m, 0);

        for (int i = 0; i < n; i++)
            cin >> l[i];

        for (int i = 0; i < m; i++)
            cin >> r[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (l[i] + r[j] <= k)
                    ans++;
            }
        }
        cout << ans << "\n";
    }
}