#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <cstring>

using namespace std;

typedef long long ll;

template <typename T>
using vi = vector<T>;

template <typename key, typename value>
using um = unordered_map<key, value>;

#define el cout << "\n"

// LOGS
#define no cout << "NO"
#define yes cout << "YES"
#define out(val, s) (cout << val << (s ? " " : "")) 

// LOOPS
#define FOR(i, s, e, inc) for (int i = (s); i < (e); i += inc)
#define RFOR(i, s, e, dec) for (int i = (s); i >= (e); i -= dec)
#define in(arr)  for (auto &i : arr) cin >> i

// sort
#define all(_arr_) sort(_arr_.begin(), _arr_.end());

// utilities
#define umc(C, _um_, val) C = _um_.find(val) != _um_.end()

void solve() {
    int n;
    cin >> n;
    vi<int> arr(n);
    in(arr);
    int ans = arr[0];
    int parity = abs(arr[0] % 2);

    for(int i = 1; i < n; i++) {
        ans = max(ans, arr[i]);
        if(abs(arr[i] % 2) == parity) continue;
        parity = abs(arr[i] % 2);
        if(arr[i - 1] + arr[i] >= arr[i]) arr[i] = arr[i - 1] + arr[i];
        ans = max(ans, arr[i]);
    }

     out(ans,0); el;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}