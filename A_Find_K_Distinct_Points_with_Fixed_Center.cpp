#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<pair<int, int>> points;
        for (int i = 0; i < k - 1; ++i) {
            points.push_back({xc, yc});
        }

        // Calculate the last point
        int last_x = xc * k - xc * (k - 1);
        int last_y = yc * k - yc * (k - 1);
        points.push_back({last_x, last_y});

        // Output the points
        for (const auto& point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }
    return 0;
}
