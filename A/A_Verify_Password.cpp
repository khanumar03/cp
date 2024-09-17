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

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flag = 0;
        vi<int> num;
        vi<char> ch;

        for (int i = 0; i < n; i++)
        {
            string t = s.substr(i, 1);
            if (isdigit(t[0]))
                num.push_back(stoi(t));
            else
                ch.push_back(s[i]);
            if (!isdigit(t[0]) && !flag)
                flag = 1;
            else if (flag && isdigit(t[0]))
                break;

            if (i + 1 >= n)
                flag = 0;
        }

        if (flag)
            cout << "NO" << endl;
        else
        {
            if (is_sorted(num.begin(), num.end()) && is_sorted(ch.begin(), ch.end()))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
