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
    int n, m, k;
    cin >> n >> m >> k;

    if (m / n >= 1 && k / n >= 1)
        cout << "Yes";
    else
        cout << "No";
}