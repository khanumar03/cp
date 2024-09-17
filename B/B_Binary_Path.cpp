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
using vi = vector<T>;

void tc()
{
    int n;
    cin >> n;
    vi<vi<char>> arr;
    for (int i = 0; i < 2; i++)
    {
        string t;
        cin >> t;
        vi<char> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(t[j]);
        }
        arr.push_back(temp);
    }
    string ls = "";
    int row = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        ls += arr[row][i];
        if (i + 1 < n && (arr[row][i + 1] == arr[row == 0 ? 1 : 0][i]))
            continue;
        else if (i + 1 < n && arr[row][i + 1] == '0')
            continue;
        else
        {
            row = row == 0 ? 1 : 0;
            if (i < n - 1)
                i--;
        }

        if (row == 1 && i == n - 1)
            ls += arr[row][i];
    }

    string str = "";
    ll dec = stoi(ls, nullptr, 2);
    cout << ls << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tc();
    }
}