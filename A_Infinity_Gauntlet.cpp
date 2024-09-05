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

    int t;
    cin >> t;
    unordered_map<string, string> m;
    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        m.erase(s);
    }

    cout << 6 - t << "\n";
    for (auto p : m)
    {
        cout << p.second << "\n";
    }
}