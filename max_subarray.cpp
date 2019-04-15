class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far, max_ending_here = 0;
        for(int i=0;i<nums.size();i++){
            max_ending_here = max_ending_here +  nums[i];
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
            else if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }
        
        return max_so_far;
    }
};

//--------------------------------------------------------------------------------------------------------------
class Solution {
public:
    int maxSubArray(vector<int>& a) {
       int max_so_far = a[0]; 
       int curr_max = a[0]; 

       for (int i = 1; i < a.size(); i++) 
       { 
            curr_max = max(a[i], curr_max+a[i]); 
            max_so_far = max(max_so_far, curr_max); 
       } 
       return max_so_far; 
    }
};
