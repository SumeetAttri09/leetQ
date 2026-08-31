class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int sum=0;
        int i=0;
        while(i<n){
            sum=sum+nums[i];
            ans.push_back(sum);
            i++;
        }
        return ans;
    }
};