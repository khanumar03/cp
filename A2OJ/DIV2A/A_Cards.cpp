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
#define rev(_v_) reverse(_v_.begin(), _v_.end())

// lambda
auto dtob = [](ll num) { string s; while(num) { s += to_string(num % 2); num /= 2; } rev(s); return s; };

void solve() {}

int main() {
    int l;
    string s;
    cin >> l;
    cin >> s;

    int o = 0;
    int n = 0;
    int e = 0;
    int z = 0;
    int r = 0;

    FOR(i, 0, l, 1) 
    { if(s[i] == 'o') o++; if(s[i] == 'n') n++; if(s[i] == 'e') e++; if(s[i] == 'z') z++; if(s[i] == 'r') r++; }

    int one = min({o, n, e});
    e -= one;
    o -= one;
    int zero = max({e, r, 0});
    while(one--) out(1,1);
    while(zero--) out(0,1);
}