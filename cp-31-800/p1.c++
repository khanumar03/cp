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

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vi<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (is_sorted(arr.begin(), arr.end()) || k > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}