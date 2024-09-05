#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

vector<int> res;

int dp[3001][3001];

int solve(int i, int j, string &a, string &b, vector<int> &t)
{
    if (i >= a.length() || j >= b.length())
    {
        if (res.size() < t.size())
        {
            vector<int> tt(t);
            res = tt;
        }
        return 0;
    }

    if (dp[i][j] != -1)
        return dp[i][j];

    int e = 0;
    int not_e = 0;

    if (a[i] == b[j])
    {
        t.push_back(i);
        e = 1 + solve(i + 1, j + 1, a, b, t);
        t.pop_back();
    }

    not_e = max(solve(i, j + 1, a, b, t), solve(i + 1, j, a, b, t));

    return dp[i][j] = max(e, not_e);
}

int main()
{
    string a, b;
    cin >> a >> b;
    vector<int> t;
    memset(dp, -1, sizeof(dp));
    int ans = solve(0, 0, a, b, t);

    for (auto s : res)
    {
        cout << s << " ";
    }
    // cout << t;
}