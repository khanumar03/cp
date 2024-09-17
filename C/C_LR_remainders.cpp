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

void solve()
{
    int n, m;
    string s;
    deque<int> dq;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        dq.push_back(elem);
    }

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int p = 1;
        for (int j = 0; j < dq.size(); j++)
        {
            p = (p * dq[j]) % m;
        }

        cout << p << " ";

        if (s[i] == 'L')
            dq.pop_front();
        else
            dq.pop_back();
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}