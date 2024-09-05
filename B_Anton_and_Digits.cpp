#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
using vec = vector<T>;

template <typename T>
T ri(T &input) { cin >> input; };

template <typename T>
T log(T output) { cout << output; };

int main()
{
    int a, b, c, d;
    ri(a);
    ri(b);
    ri(c);
    ri(d);

    int m = min(a, min(c, d));

    a -= m;

    int sum = (256 * m) + (32 * (a > 0 ? min(a, b) : 0));

    log(sum);
    log("\n");
}