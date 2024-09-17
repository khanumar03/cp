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
    vec<vec<int>> m(3, vec<int>(3, 1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int t;
            cin >> t;
            if (t % 2 == 0 || t == 0)
                continue;

            m[i][j] ^= 1;

            if (j - 1 >= 0)
            {
                m[i][j - 1] ^= 1;
            }
            if (j + 1 <= 2)
            {
                m[i][j + 1] ^= 1;
            }
            if (i - 1 >= 0)
            {
                m[i - 1][j] ^= 1;
            }
            if (i + 1 <= 2)
            {
                m[i + 1][j] ^= 1;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}