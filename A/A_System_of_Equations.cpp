#include <iostream>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int res = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i * i + j == n && i + j * j == m)
                res++;
        }
    }

    cout << res << endl;
}