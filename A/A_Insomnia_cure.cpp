#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <cstring>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

void solve()
{
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d;
        return;
    }

    int count = 1;

    for (int i = 2; i <= d; i++)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            count++;
        }
    }

    cout << d - count;
}

int main()
{
    solve();
}