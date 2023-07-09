#include <bits/stdc++.h> 
using namespace std;

// Time Complexity: O(n*logn)
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    vector<int> ans;
    map<int, int> mp;
    for(int i = 0; i < n; i++) mp[arr[i]]++;

    priority_queue<pair<int, int>> pq;
    for(auto it : mp){
        pq.push({it.second, it.first});
    }

    for(int i = 0; i < k; i++){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    
    sort(ans.begin(),ans.end());

    return ans;
}