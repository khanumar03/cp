#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    string username;
    cin >> username;
    unordered_set<char> set;
    int isOdd = 0;

    for (char ch : username)
    {
        if (set.find(ch) == set.end())
        {
            isOdd++;
            set.emplace(ch);
        }
    }

    if (isOdd % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}