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
#define umf(C, _um_, val) C = _um_.find(val) != _um_.end()

void solve() {}

int main() {
    int n;
    cin >> n;

    um<string,int> m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool C;
        umf(C, m, s);

        if(!C) { out("OK",0); el; m[s]++; }
        else { out(s,0); out(m[s],0); el; m[s]++; }
    }
}