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

int solve(int idx, string &s, int n, unordered_map<int, int> &m)
{
    if (idx >= n)
        return 0;

    if (m.find(idx) != m.end())
        return m[idx];

    if (s[idx] == '*')
        return 0;

    return m[idx] = (s[idx] == '@' ? 1 : 0) + max(solve(idx + 1, s, n, m), solve(idx + 2, s, n, m));
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        unordered_map<int, int> m;

        cout << solve(0, s, n, m) << endl;
    }
}