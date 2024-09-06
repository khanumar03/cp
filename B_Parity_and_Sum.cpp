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

void solve() {}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vi<int> arr(n);
        
        int even = 0;
        int odd = 0;
        ll mx = 0;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if((arr[i] & 1) == 1) { odd++; mx = max(0ll + arr[i], mx);}
            else even++;
        }

        if(odd == 0 || even == 0) {out(0, 0); el; continue;}

        all(arr);

        for(int i = 0; i < n; i++) {
            if((arr[i] & 1) == 1) continue;
            if(arr[i] > mx) {
                even++;
                break;
            }
            mx = mx + arr[i];
        }

        out(even,0); el;
    }

}