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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int x = ;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.find("+") <= n - 1)
            x++;
        else
            x--;
    }
    cout << x << "\n";
}