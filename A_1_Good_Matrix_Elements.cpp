#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
using vec = vector<T>;

template <typename T>
T ri(T &input) { cin >> input; };

template <typename T>
T log(T output) { cout << output << " "; };

int main()
{
    int n;
    ri(n);

    vec<vec<int>> mat;

    int mid = (n - 1) / 2;

    for (int i = 0; i < n; i++)
    {
        vec<int> col;
        for (int j = 0; j < n; j++)
        {
            int val;
            ri(val);
            col.push_back(val);
        }
        mat.push_back(col);
    }

    int top = 0;
    int bottom = 0;
    int left = 0;
    int right = 0;
    int ld = 0;
    int rd = 0;

    for (int i = 0; i < mid; i++)
        top += mat[i][mid];

    for (int i = mid + 1; i < n; i++)
        bottom += mat[i][mid];

    for (int i = 0; i < mid; i++)
        left += mat[mid][i];

    for (int i = mid + 1; i < n; i++)
        right += mat[mid][i];

    for (int i = 0; i < n; i++)
    {
        if (i == mid)
            continue;
        ld += mat[i][i];
        rd += mat[i][(n - 1) - i];
    }

    log(top + bottom + left + right + ld + rd + mat[mid][mid]);
}