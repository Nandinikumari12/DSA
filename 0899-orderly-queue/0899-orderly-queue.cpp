#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string orderlyQueue(string s, int k) {
        // Case 1: only rotations allowed
        if (k == 1) {
            string ans = s;
            
            for (int i = 1; i < s.size(); i++) {
                string rotated = s.substr(i) + s.substr(0, i);
                ans = min(ans, rotated);
            }
            
            return ans;
        }
        
        // Case 2: can fully sort
        sort(s.begin(), s.end());
        return s;
    }
};