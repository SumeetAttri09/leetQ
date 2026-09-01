class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int l=0;
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        int cnt=0;
        while(l<n){
            sum+=nums[l];
            if(mp.find(sum-goal)!=mp.end()){
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
            l++;
        }
        return cnt;
    }
};