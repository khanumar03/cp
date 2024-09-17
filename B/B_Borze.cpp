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
    string s;
    cin >> s;
    string res;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            res += to_string(0);
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            res += to_string(1);
            i++;
        }
        else
        {
            res += to_string(2);
            i++;
        }
    }
    cout << res;
}