#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        sort(rewardValues.begin(), rewardValues.end());
        
        unordered_set<int> possible;
        possible.insert(0);
        
        for (int v : rewardValues) {
            vector<int> toAdd;
            
            for (int s : possible) {
                if (v > s) {
                    toAdd.push_back(s + v);
                }
            }
            
            for (int x : toAdd) {
                possible.insert(x);
            }
        }
        
        int ans = 0;
        for (int s : possible) {
            ans = max(ans, s);
        }
        
        return ans;
    }
};