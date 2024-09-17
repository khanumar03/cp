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
    int n;
    string s;
    cin >> n >> s;
    int res = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
            res++;
    }

    cout << res;
}