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
#include <cstdio>

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
#define push(arr,val) arr.push_back(val);
#define pop(arr) arr.pop_back();

// lambda
auto dtob = [](ll num) { string s; while(num) { s += to_string(num % 2); num /= 2; } rev(s); return s; };
auto isoe = [](ll num) { return (num & 1) == 1; };

void io() {
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
}

void solve() {
    int n, m;
    cin >> n >> m;

    int st = 0;
    int e = 0;
    vector<string> r(n);
    in(r);

    FOR(i, 0, n, 1) {
        auto check = find(r[i].begin(), r[i].end(), '#');
        if(check != r[i].end()) { st = i; break; }
    }

    e = st;

    FOR(i, st + 1, n, 1) {
        auto check = find(r[i].begin(), r[i].end(),'#');
        if(check == r[i].end()) { e = i - 1; break; }
        if(i == n - 1) e = i;
    }

    int row = (st + e) / 2;

    int cs = r[row].find('#');
    int ce = r[row].rfind('#');

    int col = (cs + ce) / 2;

    out(row + 1, 1); out(col + 1, 0); el;
}

int main() {
    io();
    int t;
    cin >> t;
    while(t--) solve();
}