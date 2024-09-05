#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for(auto &sec : arr) cin >> sec;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] <= c) {
            ans++;
            continue;
        }
        ans = 1;
    }
    cout << ans << endl;
}