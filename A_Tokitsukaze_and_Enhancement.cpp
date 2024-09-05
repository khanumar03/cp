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
    int x;
    cin >> x;
    if (x % 4 == 1)
        cout << "0 A";
    else if (x % 4 == 2)
        cout << "1 B";
    else if (x % 4 == 3)
        cout << "2 A";
    else if (x % 4 == 0)
        cout << "1 A";
}