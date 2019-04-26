class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int left =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(left == sum - nums[i] - left)
                return i;
            left+=nums[i];
        }
        return -1;
    }
};