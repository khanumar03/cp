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
using vi = vector<T>;

struct TrieNode
{
    unordered_map<char, TrieNode *> node;
    int idx = INT32_MAX;
    int wl = INT32_MAX;
};

class Trie
{
private:
    struct TrieNode *node;
    int shortest_length = INT32_MAX;
    int shortest_length_index = INT32_MAX;

public:
    Trie() { node = new TrieNode(); };

    void insert(string &word, int index)
    {
        int n = word.length();
        if (shortest_length > n)
        {
            shortest_length = n;
            shortest_length_index = index;
        }
        struct TrieNode *curr = node;

        for (int i = n - 1; i >= 0; i--)
        {
            struct TrieNode *temp = new TrieNode();
            if (!curr->node.count(word[i]))
                curr->node[word[i]] = temp;

            if (curr->node[word[i]]->wl > n)
            {
                curr->node[word[i]]->wl = n;
                curr->node[word[i]]->idx = index;
            }
            curr = curr->node[word[i]];
        }
    }

    int find(string &word)
    {
        struct TrieNode *curr = node;
        int n = word.length();

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1 && !curr->node.count(word[i]))
                return shortest_length_index;
            if (!curr->node.count(word[i]))
                break;
            curr = curr->node[word[i]];
        }
        return curr->idx;
    }
};

class Solution
{
public:
    vector<int> stringIndices(vector<string> &wc, vector<string> &wq)
    {
        int nwc = wc.size();
        int nwq = wq.size();
        vector<int> res(nwq, 0);

        Trie *t = new Trie();

        for (int i = 0; i < nwc; i++)
            t->insert(wc[i], i);

        for (int i = 0; i < nwq; i++)
            res[i] = t->find(wq[i]);

        return res;
    }
};
int main()
{
    // vi<string> w = {"abyz", "bcd", "xbcd"};
    // vi<string> q = {"cd", "bcd", "xyz"};
    // Solution test;
    // vi<int> r = test.stringIndices(w, q);
    // for (auto c : r)
    //     cout << c << " ";

    string s = "1";
    cout << ;
}