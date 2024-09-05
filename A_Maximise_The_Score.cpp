#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

template <typename T>
using vec = vector<T>;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end(), greater<int>());

        int score = 0;
        for (int i = 0; i < n * 2; i += 2)
        {
            score += min(nums[i], nums[i + 1]);
        }

        cout << score << endl;
    }

    return 0;
}
