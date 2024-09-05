#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string _a = to_string(a);
        int ten = stoi(_a.substr(0, 2));
        int expo = stoi(_a.substr(2, _a.length()));

        if (ten == 10 && _a[2] != '0' && expo >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}