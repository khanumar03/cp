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

void tc()
{
    int n;
    cin >> n;

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int c = 0;

        for (auto ch : s)
        {
            c += (ch == '1');
        }

        if (c)
            st.insert(c);
    }

    cout << (st.size() > 1 ? "TRIANGLE" : "SQUARE") << endl;
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