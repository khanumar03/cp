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
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int sf = 0;
    int se = 0;

    FOR(i, 1, n, 1) {
        if(s[i] != s[i - 1] && s[i - 1] == 'S') se++;
        else if(s[i] != s[i - 1] && s[i - 1] == 'F') sf++;
    }
    if(se > sf) yes; else no;
}