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

template <typename value>
using us = unordered_set<value>;

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
#define hc(C, _hash_, val) C = _hash_.find(val) != _hash_.end()
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
    int n;
    cin >> n;
    vi<int> arr(n);
    in(arr);

    if(is_sorted(arr.begin(),arr.end())) { yes; el; return; } 

    int i = 1;
    vi<int> arr2;
    push(arr2, arr[0]);
    vi<int> arr3;

    while(i < n - 1 && arr[i - 1] <= arr[i]) push(arr2,arr[i++]);
    while(i < n) push(arr3,arr[i++]);

    FOR(i, 0, arr2.size(), 1) { push(arr3, arr2[i]); }

    if(is_sorted(arr3.begin(),arr3.end())) { yes; el; return; } 

    no; el;
}

int main() { 
    io();
    int t;
    cin >> t;
    while(t--) solve();
}