#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

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
        ll a, b, c;
        cin >> a >> b >> c;
        ll rem = b % 3;
        if (rem != 0)
        {
            if (c - (3 - rem) < 0)
            {
                cout << -1 << "\n";
                continue;
            }
            b += 3 - rem;
            c -= (3 - rem);
        }
        cout << a + (ll)(ceil(b / 3.0)) + (ll)(ceil(c / 3.0)) << endl;
    }
}
