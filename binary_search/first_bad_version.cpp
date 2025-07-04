// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        while(l <= r) {
            int m = l+(r-l)/2;
            printf("%d\n", m);
            if(!isBadVersion(m) && isBadVersion(m+1)){
                return m+1;
            }
            if(isBadVersion(m)) {
                r = m - 1;
            }
            if(!isBadVersion(m+1)){
                l = m + 1;
            }
        }
        return r;
    }
};