#include <iostream>
#include <string>
#include <cstring>
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
    int u = 0;
    int l = 0;
    string s;
    cin >> s;

    for (auto ch : s)
    {
        if (ch >= 97)
            l++;
        else
            u++;
    }

    if (l >= u)
    {
        for (auto &ch : s)
        {
            ch = tolower(ch);
        }
        cout << s;
    }
    else
    {
        for (auto &ch : s)
        {
            ch = toupper(ch);
        }
        cout << s;
    }
}