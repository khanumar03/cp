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
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if (a < b)
        cout << -1 << endl;
    else if (b < a)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}