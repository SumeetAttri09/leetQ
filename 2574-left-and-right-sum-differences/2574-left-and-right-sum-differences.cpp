class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int sum1=0;
        int sum2=0;
        int curr=0;
        int total=0;
        for(int i=0; i<n; i++){
            total+=nums[i];
        }
        for(int i=0; i<n; i++){
            int sum1=curr;
            curr+=nums[i];
            sum2=total-curr;
            ans[i]=abs(sum2-sum1);
        }
        return ans;
    }
};


