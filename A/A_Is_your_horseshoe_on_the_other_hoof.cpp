#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> set;
    int res = 0;

    for (int i = 0; i < 4; i++)
    {
        int color;
        cin >> color;
        if (set.find(color) != set.end())
            res++;
        else
            set.emplace(color);
    }

    cout << res;
}