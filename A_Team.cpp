#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                count++;
        }

        if (count >= 2)
            res++;
    }
    cout << res;
}