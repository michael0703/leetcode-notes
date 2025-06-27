class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sm;
        map<char,int> tm;
        for(auto& c: s){
            sm[c]+=1;
        }
        for(auto& c: t){
            tm[c]+=1;
        }
        return sm == tm;
    }
};