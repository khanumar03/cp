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
    long long ln;
    cin >> ln;
    int res = 0;

    while (ln != 0)
    {
        int t = ln % 10;
        if (t == 4 || t == 7)
        {
            res++;
        }
        ln /= 10;
    }

    if (res == 4 || res == 7)
        cout << "YES";
    else
        cout << "NO";
}