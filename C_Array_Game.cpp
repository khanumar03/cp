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

void solve()
{
    int a, k;
    cin >> a >> k;
    vec<ll> arr;
    priority_queue<ll, vec<ll>, greater<ll>> pq;

    for (int i = 0; i < a; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(), arr.end());
    for (int i = 1; i < a; i++)
    {
        pq.push(arr[i] - arr[i - 1]);
    }

    k--;

    while (k--)
    {
        ll n1 = pq.top();
        pq.pop();
        ll n2 = pq.top();

        pq.push(abs(n1 - n2));
        pq.push(n1);
    }

    cout << pq.top() << endl;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
}