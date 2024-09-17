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
    int z = 0;
    int e = 0;
    int r = 0;
    int o = 0;
    int n = 0;

    int nn;

    cin >> nn;

    string s;
    cin >> s;

    for (int i = 0; i < nn; i++)
    {
        switch (s[i])
        {
        case 'z':
            z++;
            break;
        // case 'e':
        //     e++;
        //     break;
        case 'r':
            r++;
            break;
        // case 'o':
        //     o++;
        //     break;
        case 'n':
            n++;
            break;

        default:
            break;
        }
    }

    // int one = min(o, min(n, e));

    // int zero = max(1, max(z, max(e, max(r, o))));

    for (int i = 0; i < n; i++)
    {
        cout << 1 << " ";
    }

    for (int i = 0; i < min(r, z); i++)
    {
        cout << 0 << " ";
    }
}