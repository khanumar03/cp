#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

void solve()
{
    string str;
    cin >> str;

    vec<ll> res;
    int s = str.length();

    for (int i = 0; i < s; i++)
    {
        ll count = 0;
        while (str[i] == '1' && i < s)
        {
            count++;
            i++;
        }
        if (count > 0)
            res.push_back(count);
    }

    ll alice = 0;

    if (!res.empty())
    {

        sort(res.begin(), res.end(), greater<int>());

        for (int i = 0; i < res.size(); i += 2)
        {
            alice += res[i];
        }
    }

    cout << alice << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
        solve();
}
