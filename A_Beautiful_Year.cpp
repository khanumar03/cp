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

int solve()
{
    int y;
    cin >> y;
    y++;

    while (y <= 9012)
    {
        unordered_set<int> s;
        int t = y;

        while (t != 0)
        {
            int n = t % 10;
            if (s.find(n) != s.end())
                break;
            s.insert(n);
            t /= 10;
        }

        if (t == 0)
        {
            return y;
        }
        y++;
    }

    return 1987;
}

int main()
{
    cout << solve();
}