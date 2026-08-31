class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        int total=0;
        for(int i=0; i<n; i++){
            total+=nums[i];
        }
        for(int i=0; i<n; i++){
            sum2 = total-sum1-nums[i];

            if(sum1==sum2) return i;

            sum1+=nums[i];
        }
        return -1;
    }
};