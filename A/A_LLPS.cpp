#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

void gen(vector<string> &res, int idx, string p, string &s, unordered_set<string> &set)
{
    if (idx >= s.length())
    {
        if (p.length() > 0 && set.find(p) == set.end() && p == string(p.rbegin(), p.rend()))
        {
            res.push_back(p);
            set.emplace(p);
        }
        return;
    }

    for (int i = idx; i < s.length(); i++)
    {
        char temp = p.back();
        if (p == "" || s[i] - 'a' >= temp - 'a')
        {
            gen(res, i + 1, p + s[i], s, set);
        }
        gen(res, i + 1, p, s, set);
    }
}

int main()
{
    vector<string> res;
    unordered_set<string> set;
    string s;
    int max = 0;
    string llps = "";

    cin >> s;

    gen(res, 0, "", s, set);

    sort(res.begin(), res.end());

    cout << res.back() << endl;

    return 0;
}