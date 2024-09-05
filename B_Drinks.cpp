#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

int main()
{
    int n;
    cin >> n;

    int f = 0;

    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        f += j;
    }

    cout << f * 1.0 / n;
}