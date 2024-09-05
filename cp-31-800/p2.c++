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
        vi<char> l(n);

        for (int i = 0; i < n; i++)
            cin >> l[i];

        l.push_back('#');
        int ans = 0;

        int i = 0;
        int j = i + 1;

        while (j < n + 1)
        {
            if (l[i] == '#')
            {
                i++;
                j = i + 1;
                continue;
            }
            if (l[j] == '.')
            {
                j++;
                continue;
            }

            if (j - i >= 3)
                ans += 2;
            else
                ans += j - i;

            i = j + 1;
            j = i + 1;
        }
        cout << ans << "\n";
    }
}