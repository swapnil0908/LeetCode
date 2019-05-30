class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> res((r),vector<int>(c));
        queue<int>q;
        if(nums.size()==0 || r*c != nums.size()*nums[0].size())
            return nums;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                q.push(nums[i][j]);
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j] = q.front();
                q.pop();
            }
        }
        return res;
    }
};