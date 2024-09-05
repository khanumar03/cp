#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

void SOE(int arr[], int n = 0)
{
    arr[0] = false;
    for (int p = 2; p <= sqrt(n - 1); p++)
    {
        if (arr[p])
        {
            for (int mark = p * p; mark < n; mark += p)
            {
                arr[mark] = false;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[54];
    memset(arr, true, sizeof(arr));
    SOE(arr, 54);
    if (!arr[m])
    {
        cout << "NO";
        return 0;
    }

    for (int i = n + 1; i <= m; i++)
    {
        if (arr[i] && i == m)
        {
            cout << "YES";
            return 0;
        }
        if (arr[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
}