
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    long long p, n;
    cin >> p >> n;

    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {

        vector<long long> avg(p, 0);
        vector<long long> t(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            avg[0] += t[i];
        }

        pair<int, int> res = {1, 0};

        for (int i = 1; i < p; i++)
        {
            int maxx = 0;
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                int tt;
                cin >> tt;
                sum += tt;
                if (tt > t[j])
                    maxx++;
                t[j] = tt;
            }
            avg[i] = sum;

            if (res.second < maxx || (res.second == maxx && avg[res.first - 1] / p < avg[i] / p))
            {
                res.first = i + 1;
                res.second = maxx;
            }
        }
        cout << res.first << endl;
    }

    return 0;
}