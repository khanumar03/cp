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

void solve() {}

int main() { 
    io();
    int n;
    cin >> n;
    vi<pair<int,int>> arr(n);

    FOR(i, 0, n, 1) {
        int sum = 0;
        FOR(j, 0, 4, 1) { int num; cin >> num; sum += num; }
        arr[i] = {i + 1, sum};
    }

    sort(arr.begin(), arr.end(), [&](pair<int,int>& a, pair<int,int>& b) {
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });

    FOR(i, 0, n, 1) if(arr[i].first == 1) { out(i + 1,0); return 0;} 
}