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
    string s;
    cin >> s;
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }

    if (a >= b)
        cout << 'A' << endl;
    else
        cout << 'B' << endl;
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