#include <bits/stdc++.h>
using namespace std;

void generate(string &s, string &t, unordered_map<string, bool> &ump, int idx, vector<string> &ans)
{
    if (idx == s.length())
    {
        ans.push_back(t);
        return;
    }

    for(int i=idx; i<s.length(); i++)
    {
        if (ump[s.substr(idx,i-idx+1)])
        {
            t.append(s.substr(idx, i-idx+1));
            t.push_back(' ');
            generate(s, t, ump, i+1, ans);
            int sz = t.length();
            t = t.substr(0, sz-(i-idx+2));
        }
    }

}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    unordered_map<string, bool> ump;
    for(auto &it: dictionary) ump[it] = true;
    vector<string> ans;
    string t;
    generate(s, t, ump, 0, ans);
    return ans;
}