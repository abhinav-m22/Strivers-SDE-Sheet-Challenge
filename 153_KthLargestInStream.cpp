#include <bits/stdc++.h> 
using namespace std;

class Kthlargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int K;
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
       K = k;
       for(auto it : arr){
           pq.push(it);
           if(pq.size() > k) pq.pop();
       }
    }

    void add(int num) {
        // Write your code here.
        pq.push(num);
        if(pq.size() > K) pq.pop();
    }

    int getKthLargest() {
       // Write your code here.
       return pq.top();
    }

};