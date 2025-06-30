class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 2) return s.size();
        set<char> curSet;
        int cur = 0;
        int ans = -1;
        int r = 0;
        int l = 0;
        while(r < s.size()){
            if(!curSet.count(s[r])){
                curSet.insert(s[r]);
                r++;
            }else{
                curSet.erase(s[l]);
                l++;
            }
            ans=max(ans,(int)curSet.size());
        }
        return ans;
    }
};