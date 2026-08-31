class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int,int>mp;
        int i=0;
        int ans=0;
        mp[0]=-1;
        while(i<n){
            if(nums[i]==1){
                sum=sum+1;
            } else {
                sum=sum-1;
            }

            if(mp.find(sum)!=mp.end()){
                ans=max(ans, i-mp[sum]);
            } else {
                mp[sum]=i;
            }
            i++;
        }
        return ans;
    }
};