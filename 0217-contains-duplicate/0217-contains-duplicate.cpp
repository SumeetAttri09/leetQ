class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        map<int,int>mpp;
        while(i<n){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==2) return true;
            i++;
        }
        return false;
    }
};