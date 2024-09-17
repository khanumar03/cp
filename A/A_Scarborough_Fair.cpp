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

void update(string &s, int l, int r)
{
    char c1, c2;
    cin >> c1;
    cin >> c2;
    for (int i = l - 1; i <= r - 1; i++)
    {
        if (s[i] == c1)
            s[i] = c2;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        update(s, l, r);
    }
    cout << s;
    cout << 392 % 4;
}