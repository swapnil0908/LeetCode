class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int idx = 0;
        if(n<1)
            return -1;
        int max = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] >= max){
                max = nums[i];
                idx = i;
            }
        }
        for(int i=0;i<n;i++){
            if(i != idx){
                if(max < 2*nums[i])
                  return -1;  
            }
        }
        
        return idx;
    }
};