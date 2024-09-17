#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

vec<int> p(200000, 0);

void compute()
{
    int sum = 0;
    for (int i = 1; i <= 200000; i++)
    {
        int num = i;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        p[i] = sum;
    }
}

void solve()
{
    int num;
    cin >> num;

    cout << p[num] << endl;
}

int main()
{
    int t;
    cin >> t;
    compute();

    while (t--)
    {
        solve();
    }
}