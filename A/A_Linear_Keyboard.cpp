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

void tc()
{
    string kb;
    cin >> kb;
    unordered_map<char, int> m;
    for (int i = 0; i < 26; i++)
    {
        m[kb[i]] = i;
    }
    string w;
    cin >> w;
    int ans = 0;
    if (w.length() == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i < w.length(); i++)
    {
        ans += abs(m[w[i - 1]] - m[w[i]]);
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tc();
    }
}