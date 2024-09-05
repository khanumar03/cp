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
using vi = vector<T>;

int &get_min_ref(int &a, int &b, int &c)
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int steps = 5;

    while (steps--)
    {
        int &num = get_min_ref(a, b, c);
        num++;
    }
    cout << a * b * c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}