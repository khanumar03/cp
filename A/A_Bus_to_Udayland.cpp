#include <iostream>
#include <vector>

using namespace std;

int  main() {
    int n;
    cin >> n;
    bool f = 0;
    vector<string> arr;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(!f && s[0] == 'O' && s[1] == 'O') {
            f = 1;
            s[0] = '+';
            s[1] = '+';
        }
        else if(!f && s[3] == 'O' && s[4] == 'O') {
            f = 1;
            s[3] = '+';
            s[4] = '+';
        }
        arr.push_back(s);
    }

    if(f) {
        cout << "YES" << endl;
        for(auto str : arr) cout << str << endl;
    }
    else cout << "NO" << endl;
}