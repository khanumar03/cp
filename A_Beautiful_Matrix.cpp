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
    int i = 0;
    int j = 0;
    bool flag = true;

    for (; i < 5 && flag; i++)
    {
        j = 0;
        for (; j < 5; j++)
        {
            int o;
            cin >> o;

            if (o == 1)
            {
                flag = false;
                break;
            }
        }
    }

    cout << abs(i - 3) + abs((j + 1) - 3);
}