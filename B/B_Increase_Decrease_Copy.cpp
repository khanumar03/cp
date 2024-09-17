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

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi<int> a(n);
        vi<int> b(n + 1);

        for (auto &x : a)
            cin >> x;

        for (auto &x : b)
            cin >> x;

        int sum = 0;
        int ext = INT32_MAX;

        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i] - b[i]);
            ext = min(ext, abs(a[i] - b[n]));
            ext = min(ext, abs(b[i] - b[n]));
            if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
                ext = 0;
        }

        cout << sum + ext + 1 << endl;
    }
}