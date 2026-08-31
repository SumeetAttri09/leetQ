class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        int presum=0;
        int ans=0;
        int i=0;
        mp[0]=1;
        while(i<n){
            presum=presum+nums[i];
            if(mp.find(presum-k)!=mp.end()){
                ans+=mp[presum-k];
            }
            mp[presum]++;
            i++;
        }
        return ans;
    }
};