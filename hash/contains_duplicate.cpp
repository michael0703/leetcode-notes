class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        auto numSet = std::set<int>{nums.begin(),nums.end()};
        return nums.size() != numSet.size();
    }
};