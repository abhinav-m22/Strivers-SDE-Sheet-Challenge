#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
    int i =0,j=i+1;
    int ans;

    while(j<n){
        if(arr[i]==arr[j]){
            ans = arr[i];
            break;
        }
        else{
            i++;
            j++;
        }
    }

    return ans;
}
