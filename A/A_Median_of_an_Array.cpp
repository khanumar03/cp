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
        int n;
        cin >> n;
        vi<int> res(n, 0);

        for (int i = 0; i < n; i++)
            cin >> res[i];

        sort(res.begin(), res.end());

        int idx = (n - 1) / 2;
        int ans = 1;

        while (idx < n - 1 && res[idx] == res[idx + 1])
        {
            idx++;
            ans++;
        }
        cout << ans << endl;
    }
}