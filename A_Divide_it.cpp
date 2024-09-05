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

// ll solve(ll n, int moves, unordered_map<ll, ll> &dp)
// {
//     if (n == 1)
//         return moves;
//     if (n <= 0)
//         return __LONG_LONG_MAX__;

//     if (dp.find(n) != dp.end())
//         return dp[n];

//     ll t = __LONG_LONG_MAX__;
//     ll th = __LONG_LONG_MAX__;
//     ll f = __LONG_LONG_MAX__;

//     if (n % 2 == 0)
//     {
//         t = solve(n / 2, moves + 1, dp);
//     }

//     if (n % 3 == 0)
//     {
//         th = solve((2 * n) / 3, moves + 1, dp);
//     }

//     if (n % 5 == 0)
//     {
//         f = solve((4 * n) / 5, moves + 1, dp);
//     }

//     return dp[n] = min(t, min(th, f));
// }

int main()
{
    ll q;
    cin >> q;

    while (q--)
    {
        ll n;
        cin >> n;

        if (n == 1)
            cout << 0 << endl;
        else
        {

            ll moves = 0;
            bool possible = true;

            while (n > 1)
            {
                if (n % 5 == 0)
                {
                    n = (4 * n) / 5;
                    moves++;
                }
                else if (n % 3 == 0)
                {
                    n = (2 * n) / 3;
                    moves++;
                }
                else if (n % 2 == 0)
                {
                    n = n / 2;
                    moves++;
                }
                else
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                cout << moves << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}
