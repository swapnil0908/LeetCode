class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> V;
        int j=0,k=0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>R(3);
                    R[0] = nums[i];
                    R[1] = nums[j];
                    R[2] = nums[k];
                    V.insert(R);
                    j++;k--;
                }
                if(sum>0)
                    k--;
                if(sum<0)
                    j++;

            }
        }
        
        vector<vector<int>> result(V.begin(),V.end());
        return result;
    }
};