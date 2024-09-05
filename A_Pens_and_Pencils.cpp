#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;

        int x = ceil((double)a / c);
        int y = ceil((double)b / d);
        if (x + y > k)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << x << " " << y << "\n";
        }
    }
}