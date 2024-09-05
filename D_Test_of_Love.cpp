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

// void solve()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     string s;
//     cin >> s;
//     s = "S" + s;
//     int i = 0;

//     while (i <= n)
//     {
//         if (s[i] == 'C')
//         {
//             cout << "NO" << endl;
//             return;
//         }
//         else if (s[i] == 'L' || s[i] == 'S')
//         {
//             if (i + m >= n + 1 || s[i + m] == 'L' || (s[i + m] == 'W' && k > 0))
//                 i += m;
//             else
//                 i++;
//         }
//         else
//         {
//             while (i <= n && s[i] == 'W')
//             {
//                 if (k == 0)
//                 {
//                     cout << "NO" << endl;
//                     return;
//                 }
//                 k--;
//                 i++;
//             }
//         }
//     }

//     cout << "YES" << endl;
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        s = "L" + s;
        vi<int> dp(n + 10, 0);

        for (int i = n; i >= 0; i--)
        {
            if (s[i] == 'W')
                dp[i] = dp[i + 1] + 1;
            else if (s[i] == 'C')
                dp[i] = k + 1;
            else
            {
                dp[i] = INT32_MAX;
                for (int j = i + 1; j <= i + m; j++)
                {
                    dp[i] = min(dp[i], dp[j]);
                }
            }
        }
        if (dp[0] <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}