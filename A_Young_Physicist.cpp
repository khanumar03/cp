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

#define FOR(i, s, e, inc) for (int i = (s); i < (e); i += inc)
#define RFOR(i, s, e, dec) for (int i = (s); i >= (e); i -= dec)
#define fe(x, t) for (auto x : t)

bool solve()
{
    int n;
    cin >> n;
    vec<int> res(3, 0);

    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        res[0] += x;
        res[1] += y;
        res[2] += z;
    }

    FOR(i, 0, 3, 1)
    {
        if (res[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    vec<int> r{1, 2, 3, 4};
    if (solve())
        cout << "YES";
    else
        cout << "NO";
}