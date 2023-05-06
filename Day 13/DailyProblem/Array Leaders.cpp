#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    // Write your code here.
    vector<int> ans;
    //int flag[n] = {0};
    int p = elements[n-1];
    ans.push_back(p);
    
    for(int i = n-2;i>=0;i--){
        if(elements[i]>p){
            p=elements[i];
            ans.push_back(p);
            
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

