#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

template <typename T>
using vec = vector<T>;

template <typename T>
T ri(T &input) { cin >> input; };

int main()
{
    int row, col;
    ri(row);
    ri(col);

    set<vec<int>> vertices;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char temp;
            ri(temp);

            if (temp == '*')
            {
                vertices.emplace(vec<int>{i + 1, j + 1});
            }
        }
    }

    vec<int> rows(row + 1, 0);
    vec<int> cols(col + 1, 0);

    for (auto &it : vertices)
    {
        rows[it[0]]++;
        cols[it[1]]++;
    }

    for (int i = 1; i <= row; i++)
    {
        if (rows[i] == 1)
        {
            row = i;
            break;
        }
    }

    for (int i = 1; i <= col; i++)
    {
        if (cols[i] == 1)
        {
            col = i;
            break;
        }
    }

    cout << row << " " << col;
}