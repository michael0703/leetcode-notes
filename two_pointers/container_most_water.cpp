class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int ans = -1;
        while(l < r) {
            ans = max(ans, min(height[l],height[r]) * (r - l));
            if(height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};