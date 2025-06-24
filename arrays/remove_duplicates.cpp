class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int init = -105;
        int k = 0;
        int cur = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] == init) {
            }else{
                k+=1;
                nums[cur] = nums[i];
                init = nums[i];
                cur+=1;
            }
        }
        return k;
    }
};