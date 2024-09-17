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
    int n;
    cin >> n;

    if ((n & 1) == 0)
        cout << "Mahmoud";
    else
        cout << "Ehab";
}