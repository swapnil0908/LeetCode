class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end = nums.size()-1;
        int pos = nums[0];
        if(pos >= end)
            return true;
        while(pos != 0){
            pos += nums[pos];
            if(pos >= end)
                return true;
            if(nums[pos] == 0){
               int zero = pos;
            while(pos !=0){
                pos--;
                if((pos+nums[pos]) > zero)
                    break;
                }
            }
        }
        
        return false;
    }
};