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

// DISJOINT SET UNION
class DSU
{
private:
    vi<int> c;

    int find(int u)
    {
        int p = c[u];
        if (p == u)
            return p;
        return find(p);
    }

public:
    DSU(int n)
    {
        for (int i = 0; i < n; i++)
        {
            c.push_back(i);
        }
    }

    bool mu(int u, int v)
    {
        bool isUnion = find(u) == find(v);
        if (isUnion)
            return false;
        c[v] = u;
        return true;
    }
};

// MATH
int gcd(int a, int b) { if(b == 0) return a; return gcd(b, a % b); }

bool isprime(int num)
{

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int fts(int n)
{
    int c = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            c++;
            if (n / i != i)
                c++;
        }
    }
    return c;
}

void SOE(vi<bool> &arr, int n = 2)
{
    for (int p = 2; p <= sqrt(n - 1); p++)
    {
        if (arr[p])
        {
            for (int mark = p * p; mark < n; mark += p)
            {
                arr[mark] = false;
            }
        }
    }
}

// string KMP

string kmp(string &s, string &p)
{
    int sN = s.length();
    int pN = p.length();
    vi<int> lps(pN, 0);
    int i = 0;
    int j = i + 1;
    lps[i] = 0;
    while (j < pN)
    {
        if (p[i] == p[j])
        {
            lps[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i != 0)
                i = lps[i - 1];
            else
                lps[j++] = 0;
        }
    }
    i = 0;
    j = 0;

    while (i < sN && j < pN)
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    if (j < pN)
        return "";

    return s.substr(i - j, pN);
}

// SEGEMENT TREE

class SGT
{
private:
    vector<pair<int, int>> seg;
    int n;

    void build(int idx, int low, int high, vector<int> &nums)
    {
        if (low == high)
        {
            seg[idx].first = nums[low];
            seg[idx].second = nums[low];
            return;
        }
        int mid = low + (high - low) / 2;
        build(2 * idx + 1, low, mid, nums);
        build(2 * idx + 2, mid + 1, high, nums);
        seg[idx].first = max(seg[2 * idx + 1].first, seg[2 * idx + 2].first);
        seg[idx].second = min(seg[2 * idx + 1].second, seg[2 * idx + 2].second);
    }

public:
    SGT(vi<int> &nums)
    {
        n = nums.size();
        seg = vector<pair<int, int>>(n * 4, {INT32_MIN, INT32_MAX});
        build(0, 0, n - 1, nums);
    }

    pair<int, int> query(int idx, int low, int high, int l, int r)
    {
        if (low > r || high < l)
            return {INT32_MIN, INT32_MAX};
        if (low >= l && high <= r)
            return seg[idx];

        int mid = low + (high - low) / 2;
        auto left = query(2 * idx + 1, low, mid, l, r);
        auto right = query(2 * idx + 2, mid + 1, high, l, r);
        return {max(left.first, right.first), min(left.second, right.second)};
    }
};

int main()
{
    // ios::sync_with_stdio(0);
    cout << gcd(5,4);
}