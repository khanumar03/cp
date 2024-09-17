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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi<int> arr(k);
    for (auto &num : arr)
        cin >> num;
    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 0; i < k - 1; i++)
        ans += 2 * arr[i] - 1;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}