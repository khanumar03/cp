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
    string res;
    int n, s;
    cin >> n >> s >> res;

    while (s--)
    {
        for (int i = 1; i < n; i++)
        {
            if (res[i] == 'G' && res[i - 1] == 'B')
            {
                swap(res[i], res[i - 1]);
                i++;
            }
        }
    }

    cout << res;
}