class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        int l=0;
        int r=0;
        while(r<n){
            mp[nums[r]]++;
            while(mp[nums[r]]>1){
                if(nums[l]==nums[r] && abs(l-r)<=k){
                    return true;
                }
                mp[nums[l]]--;
                l++;
            }
            r++;
        }
        return false;
    }
};