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

void tc()
{
    int n;
    cin >> n;

    for (int i = 0; i < 26; i++)
    {
        int sum = i + 1;
        for (int j = 0; j < 26; j++)
        {
            sum += j + 1;
            for (int k = 0; k < 26; k++)
            {
                sum += k + 1;

                if (sum == n)
                {
                    cout << (char)(i + 97) << (char)(j + 97) << (char)(k + 97) << endl;
                    return;
                }

                sum -= k + 1;
            }
            sum -= j + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tc();
    }
}