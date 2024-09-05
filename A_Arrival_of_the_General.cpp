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

int main()
{
    pair<int, int> a = {INT32_MAX, 0};
    pair<int, int> b = {INT32_MIN, 0};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;

        if (s <= a.first)
        {
            a.first = s;
            a.second = i;
        }
        if (s > b.first)
        {
            b.first = s;
            b.second = i;
        }
    }

    if (b.second == 0 && a.second == n - 1)
    {
        cout << 0;
    }
    else if (a.second < b.second)
    {
        cout << (n - 1 - a.second) + (b.second - 1);
    }
    else
    {
        cout << (n - 1 - a.second) + b.second;
    }

    cout << endl;
}