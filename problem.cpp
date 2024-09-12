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

vi<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};

int main() {
    int n = arr.size(); all(arr);
    int type = -1; int freq = 0;

    FOR(i, 0, n, 1) {
        int t = arr[i]; int count = 1; int j = i + 1;
        while(j < n && t == arr[j]) { count++; j++;}
        if(count > freq) { type = t; freq = count; }
        i = j;
    }
    out(type,0); el;
}