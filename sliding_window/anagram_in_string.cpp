class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        array<int,26> m;
        for(auto c: p){
            m[c-'a']+=1;
        }
        array<int,26> cur;
        int n = s.size();
        int l = p.size();
        for(int i = 0; i < l; ++i ){
            cur[s[i]-'a']+=1;
        }
        vector<int> ans;
        if(cur==m) {ans.emplace_back(0);}
        for(int i = l; i < n; ++i) {
            cur[s[i-p.size()]-'a']-=1;
            cur[s[i]-'a']+=1;
            if(cur == m) {
                ans.emplace_back(i-p.size()+1);
            }
        }
        return ans;
    }
};