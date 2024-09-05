#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

int cf(int n)
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
int main()
{
    int n;
    cin >> n;

    cout << (cf(n) - 1);
}