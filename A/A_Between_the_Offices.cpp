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
    cin >> n;
    string s;
    cin >> s;
    int S = 0;
    int F = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
            continue;

        if (s[i - 1] == 'S')
            S++;
        else
            F++;
    }

    if (S > F)
        cout << "YES";
    else
        cout << "NO";
}