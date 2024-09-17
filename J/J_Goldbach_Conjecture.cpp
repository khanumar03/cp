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
using vi = vector<T>;

void SOE(vi<bool> &arr, int n)
{
    for (int p = 2; p <= sqrt(n); p++)
    {
        if (arr[p])
        {
            for (int mark = p * p; mark <= n; mark += p)
            {
                arr[mark] = 0;
            }
        }
    }
}

int main()
{
    int x;
    cin >> x;
    vi<bool> arr(x, 1);
    SOE(arr, x + 1);
    int steps = 0;

    while (x >= 4)
    {
        int i = 2;
        int j = x;

        while (i <= j)
        {
            if (!arr[i])
            {
                i++;
                continue;
            }
            if (!arr[j])
            {
                j--;
                continue;
            }
            if (i + j == x)
            {
                x = j - i;
                break;
            }
            if (i + j > x)
                j--;
            else
                i++;
        }
        steps++;
    }
    cout << steps << endl;
}