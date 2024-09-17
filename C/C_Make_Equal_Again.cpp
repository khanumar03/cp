#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

#define el "\n";

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

void solve()
{
    int n;
    cin >> n;
    vi<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 1;
    int right = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            break;
        left++;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[i + 1])
            break;
        right++;
    }
    ll s = 0;

    if (arr[0] == arr[n - 1])
    {
        s = min(n, left + right);
    }
    else
    {
        s = min(n, max(left, right));
    }
    cout << n - s << el;
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