// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low =1;
        int high = n;
        while(low<high){
            int mid = (low/2) + (high/2);
            if(isBadVersion(mid) && !isBadVersion(mid-1)) return mid;
            if(isBadVersion(mid)) high = mid-1;
            else low = mid+1;
        }
        return low;
        
    }
};