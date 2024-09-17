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
    string s1, s2;
    cin >> s1 >> s2;
    string res;
    int n = s1.length();
    um<char,int> m1, m2;

    for(auto &i : s1) m1[i]++;
    for(auto &i : s2) m2[i]++;

    FOR(i, 0, n, 1) {
        if(m2[s1[i]] == 0) continue;
        if(m1[s1[i]] > m2[s1[i]]) m1[s1[i]]--;
        else res += s1[i]; 
    }
    if(res == s2) yes;
    else no;
    el;

}

int main() { 
    io();
    int t;
    cin >> t;
    while(t--) solve();
}