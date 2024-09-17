#include <iostream>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int solve(int n)
{
    if (n % 2 != 0)
        return -1;

    for (int i = 1; i <= n; i += 2)
    {
        cout << i + 1 << " " << i << " ";
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int res = solve(n);

    if (res == -1)
        cout << res << endl;
}