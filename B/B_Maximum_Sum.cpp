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

const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    ll sum = 2;
    for (int i = 0; i < 100; i++)
    {
        sum += sum % MOD;
    }
    cout << sum % MOD;
}